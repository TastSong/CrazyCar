using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class EasyObjectsFade : MonoBehaviour
{
    enum MeshDetectionType
    {
        UseAllMeshRenderers, UseAllMeshRenderersAlsoInChildren, UseOneMeshRenderer
    }

    [Tooltip("Should the script detect all meshes attached to the game object or to the childrens of the game object or only first detected mesh")]
    [SerializeField] private MeshDetectionType meshDetectionType = MeshDetectionType.UseOneMeshRenderer;

    [Tooltip("Should the script detect also skinned mesh renderes")]
    [SerializeField] private bool allowSkinnedMeshRenderes = false;

    [Tooltip("If true, 2 separate lines are raycasted to detect meshes even when the camera is inside")]
    [SerializeField] private bool detectFromInsideCollider = false;

    [Tooltip("Layers that can be faded, you can use it to hide player or other non-dithered shaders from this script, if you forget about exlcluding with layer mask non-urpStandard shaders error will occur")]
    [SerializeField] private LayerMask layerMask = ~0;

    [Tooltip("Time of the fade")]
    [SerializeField, Range(0, 2f)] private double time = 1f;

    [Tooltip("Opacity of the object when fully faded")]
    [SerializeField, Range(0, 1f)] private float minimalOpacity = 0.1f;

    [SerializeField] private Transform playerTransform;

    private List<Material> fadedOut = new List<Material>();

    private float rayDistance = 10f;

    private float step
    {
        get
        {
            if (time > 0.1f) return 0.01f;
            else return 0.09f;
        }
    }

    // Update is called once per frame
    private void FixedUpdate()
    {
        RaycastHit[] hits;
        rayDistance = Vector3.Distance(playerTransform.position, transform.position);

        Vector3 position = transform.position;
        Vector3 direction = Vector3.Normalize(playerTransform.position - transform.position);

        RaycastHit[] hits1 = Physics.RaycastAll(position, direction, rayDistance, layerMask);

        if (detectFromInsideCollider)
        {
            position = playerTransform.position;
            direction = Vector3.Normalize(transform.position - playerTransform.position);

            RaycastHit[] hits2 = Physics.RaycastAll(position, direction, rayDistance, layerMask);

            hits = new RaycastHit[hits1.Length + hits2.Length];
            hits1.CopyTo(hits, 0);
            hits2.CopyTo(hits, hits1.Length);
        }
        else hits = hits1;

        //Uncomment to see raycasted line
        //Debug.DrawRay(position, direction * rayDistance, Color.red);

        List<Material> currentIds = new List<Material>();
        foreach (RaycastHit h in hits)
        {
            List<Material> materials = new List<Material>();
            List<MeshRenderer> meshRenderers = new List<MeshRenderer>();

            //Here we are looking for mesh renderer in the parent of the collider
            //We are expectint only 1 mesh render but you are free to add functionality
            //for more. Just loop over your renderers

            switch (meshDetectionType)
            {
                case MeshDetectionType.UseOneMeshRenderer:
                    MeshRenderer mr = h.collider.GetComponent<MeshRenderer>();
                    if (mr == null)
                    {
                        mr = h.collider.GetComponentInParent<MeshRenderer>();
                    }
                    else if (mr == null)
                    {
                        mr = h.collider.GetComponentInChildren<MeshRenderer>();
                    }
                    else
                    {
                        meshRenderers.Add(mr);
                        break;
                    }
                    break;

                case MeshDetectionType.UseAllMeshRenderers:
                    meshRenderers.AddRange(h.collider.GetComponents<MeshRenderer>());
                    break;

                case MeshDetectionType.UseAllMeshRenderersAlsoInChildren:
                    meshRenderers.AddRange(h.collider.GetComponentsInChildren<MeshRenderer>());
                    break;
            }

            if (meshRenderers.Count > 0)
            {
                foreach (var mr in meshRenderers)
                {
                    materials.AddRange(mr.materials);
                }
            }
            else if (allowSkinnedMeshRenderes)
            {
                List<SkinnedMeshRenderer> skinnedMeshRenderers = new List<SkinnedMeshRenderer>();

                switch (meshDetectionType)
                {
                    case MeshDetectionType.UseOneMeshRenderer:
                        SkinnedMeshRenderer mr = h.collider.GetComponent<SkinnedMeshRenderer>();
                        if (mr == null)
                        {
                            mr = h.collider.GetComponentInParent<SkinnedMeshRenderer>();
                        }
                        else if (mr == null)
                        {
                            mr = h.collider.GetComponentInChildren<SkinnedMeshRenderer>();
                        }
                        else
                        {
                            skinnedMeshRenderers.Add(mr);
                            break;
                        }
                        break;

                    case MeshDetectionType.UseAllMeshRenderers:
                        skinnedMeshRenderers.AddRange(h.collider.GetComponents<SkinnedMeshRenderer>());
                        break;

                    case MeshDetectionType.UseAllMeshRenderersAlsoInChildren:
                        skinnedMeshRenderers.AddRange(h.collider.GetComponentsInChildren<SkinnedMeshRenderer>());
                        break;
                }

                if (skinnedMeshRenderers.Count > 0)
                {
                    foreach (var mr in skinnedMeshRenderers)
                    {
                        materials.AddRange(mr.materials);
                    }
                }
            }

            foreach (var mat in materials)
            {
                if (!fadedOut.Contains(mat))
                {
                    fadedOut.Add(mat);

                    StartCoroutine(FadeOut(mat));
                    currentIds.Add(mat);
                }
                else
                {
                    currentIds.Add(mat);
                }
            }
        }

        List<Material> idsToDelete = new List<Material>();

        foreach (var mat in fadedOut)
        {
            if (!currentIds.Contains(mat))
            {
                StartCoroutine(FadeIn(mat));

                idsToDelete.Add(mat);
            }
        }

        foreach (var id in idsToDelete)
        {
            fadedOut.Remove(id);
        }
    }

    //Here are functions that are responsible for fading objets.
    // You could easily change this functions so they could fit your
    // own shader if you wish to make one yourself
    private IEnumerator FadeOut(Material mat)
    {
        StandardShaderUtils.ChangeTransparency(mat, true);

        float steps = (1 - minimalOpacity) / step;
        double timeStep = time / steps;

        float opacity = 1f;
        while (opacity >= minimalOpacity)
        {
            opacity -= step;

            Color c1 = mat.color;
            c1.a = opacity;
            mat.color = c1;

            yield return new WaitForSeconds((float)timeStep);
        }
        Color c = mat.color;
        c.a = opacity;
        mat.color = c;
    }

    private IEnumerator FadeIn(Material mat)
    {

        float steps = (1 - minimalOpacity) / step;
        double timeStep = time / steps;

        float opacity = minimalOpacity;
        while (opacity < 1f)
        {
            opacity += step;
            Color c1 = mat.color;
            c1.a = opacity;
            mat.color = c1;

            yield return new WaitForSeconds((float)timeStep);
        }

        Color c = mat.color;
        c.a = opacity;
        mat.color = c;

        StandardShaderUtils.ChangeTransparency(mat, false);

    }
}
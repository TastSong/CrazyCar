using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace MoreMountains.NiceVibrations
{
    public class Pagination : MonoBehaviour
    {
        public GameObject PaginationDotPrefab;
        public Color ActiveColor;
        public Color InactiveColor;
        protected List<Image> _images;
        
        public virtual void InitializePagination(int numberOfPages)
        {
            _images = new List<Image>();
            for (int i = 0; i < numberOfPages; i++)
            {
                GameObject dotPrefab = Instantiate(PaginationDotPrefab);
                dotPrefab.transform.SetParent(this.transform);
                dotPrefab.name = "PaginationDot" + i;
                _images.Add(dotPrefab.GetComponent<Image>());
            }
            foreach(Image image in _images)
            {
                image.color = InactiveColor;
                image.rectTransform.localScale = Vector3.one;
                image.rectTransform.localPosition = Vector3.zero;
                image.SetNativeSize();
            }
        }    
        
        public virtual void SetCurrentPage(int numberOfPages, int currentPage)
        {
            for (int i = 0; i < numberOfPages; i++)
            {
                if (i == currentPage)
                {
                    _images[i].color = ActiveColor;
                }
                else
                {
                    _images[i].color = InactiveColor;
                }
            }
        }
    }
}

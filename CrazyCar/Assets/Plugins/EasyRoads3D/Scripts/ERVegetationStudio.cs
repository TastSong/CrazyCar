using UnityEngine;
using System.Collections;
using EasyRoads3Dv3;

public class ERVegetationStudio : ScriptableObject {

	static public bool VegetationStudio(){
		#if VEGETATION_STUDIO
		return true;
		#else
		return false;
		#endif
	}

	static public bool VegetationStudioPro(){
		#if VEGETATION_STUDIO_PRO
		return true;
		#else
		return false;
		#endif
	}

	static public void CreateVegetationMaskLine(GameObject go, float grassPerimeter, float plantPerimeter, float treePerimeter, float objectPerimeter, float largeObjectPerimeter){
		#if VEGETATION_STUDIO || VEGETATION_STUDIO_PRO
		AwesomeTechnologies.VegetationMaskLine vegetationMaskLine = go.GetComponent<AwesomeTechnologies.VegetationMaskLine>();

		if (vegetationMaskLine == null)
		{
			vegetationMaskLine = go.AddComponent<AwesomeTechnologies.VegetationMaskLine>();
		}

		vegetationMaskLine.AdditionalGrassPerimiter = grassPerimeter; 
		vegetationMaskLine.AdditionalPlantPerimiter = plantPerimeter; 
		vegetationMaskLine.AdditionalTreePerimiter = treePerimeter;
		vegetationMaskLine.AdditionalObjectPerimiter = objectPerimeter;
		vegetationMaskLine.AdditionalLargeObjectPerimiter = largeObjectPerimeter;
		#endif
	}


	static public void UpdateVegetationMaskLine(GameObject go, ERVSData[] vsData, float grassPerimeter, float plantPerimeter, float treePerimeter, float objectPerimeter, float largeObjectPerimeter){
		#if VEGETATION_STUDIO || VEGETATION_STUDIO_PRO
		AwesomeTechnologies.VegetationMaskLine vegetationMaskLine = go.GetComponent<AwesomeTechnologies.VegetationMaskLine>();

		if (vegetationMaskLine == null)
		{
			vegetationMaskLine = go.AddComponent<AwesomeTechnologies.VegetationMaskLine>();
		}
		vegetationMaskLine.AdditionalGrassPerimiter = grassPerimeter; 
		vegetationMaskLine.AdditionalPlantPerimiter = plantPerimeter; 
		vegetationMaskLine.AdditionalTreePerimiter = treePerimeter;
		vegetationMaskLine.AdditionalObjectPerimiter = objectPerimeter;
		vegetationMaskLine.AdditionalLargeObjectPerimiter = largeObjectPerimeter;

		vegetationMaskLine.ClearNodes();


		foreach (ERVSData data in vsData)
		{
			vegetationMaskLine.AddNodeToEnd(data.position, data.width, data.active);
		}


	//	vegetationMaskLine.AddNodeToEnd(nodePositions[0], widths[0], activeStates[0]);

		vegetationMaskLine.UpdateVegetationMask();

		#endif
	}

	static public void UpdateHeightmap(Bounds bounds){
		#if VEGETATION_STUDIO || VEGETATION_STUDIO_PRO
		AwesomeTechnologies.VegetationStudio.VegetationStudioManager.RefreshTerrainHeightMap();
		#endif
	}


	static public void RemoveVegetationMaskLine(GameObject go){
		#if VEGETATION_STUDIO || VEGETATION_STUDIO_PRO
		if(go.GetComponent<AwesomeTechnologies.VegetationMaskLine>() != null)DestroyImmediate(go.GetComponent<AwesomeTechnologies.VegetationMaskLine>());
		#endif
	}

	static public void CreateBiomeArea(GameObject go, float distance, float blendDistance, float noise){
		#if VEGETATION_STUDIO_PRO
		AwesomeTechnologies.VegetationSystem.Biomes.BiomeMaskArea biomeArea = go.GetComponent<AwesomeTechnologies.VegetationSystem.Biomes.BiomeMaskArea>();

		if (biomeArea == null)
		{
			biomeArea = go.AddComponent<AwesomeTechnologies.VegetationSystem.Biomes.BiomeMaskArea>();
			biomeArea.BiomeType = AwesomeTechnologies.VegetationSystem.BiomeType.Road;
		}

		biomeArea.BlendDistance = blendDistance;
		if(noise > 0){
			biomeArea.UseNoise = true;
			biomeArea.NoiseScale = noise;
		}
		#endif
	}

	static public void UpdateBiomeArea(GameObject go, ERVSData[] vsData, float distance, float blendDistance, float noise){
		#if VEGETATION_STUDIO_PRO
		AwesomeTechnologies.VegetationSystem.Biomes.BiomeMaskArea biomeArea = go.GetComponent<AwesomeTechnologies.VegetationSystem.Biomes.BiomeMaskArea>();

		if (biomeArea == null)
		{
			biomeArea = go.AddComponent<AwesomeTechnologies.VegetationSystem.Biomes.BiomeMaskArea>();
			biomeArea.BiomeType = AwesomeTechnologies.VegetationSystem.BiomeType.Road;
		}

		biomeArea.BlendDistance = blendDistance;
		if(noise > 0){
			biomeArea.UseNoise = true;
			biomeArea.NoiseScale = noise;
		}

		biomeArea.ClearNodes();

		distance += blendDistance;
		foreach (ERVSData data in vsData)
		{
			biomeArea.AddNode(data.leftPosition + (distance*-data.dir));
			biomeArea.AddNode(data.rightPosition + (distance*data.dir));
		}


		//	vegetationMaskLine.AddNodeToEnd(nodePositions[0], widths[0], activeStates[0]);

		biomeArea.UpdateBiomeMask();

		#endif
	}

	static public void RemoveBiomeArea(GameObject go){
		#if VEGETATION_STUDIO_PRO
		if(go.GetComponent<AwesomeTechnologies.VegetationSystem.Biomes.BiomeMaskArea>() != null)DestroyImmediate(go.GetComponent<AwesomeTechnologies.VegetationSystem.Biomes.BiomeMaskArea>());
		#endif
	}
}


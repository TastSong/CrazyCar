This package allows you to easily add objects fading when they occur between camera and the player, using unity default URP shader transparency.

Be aware of the EasyObjectsFade.cs script. You must remember to set the layer mask to the layers that contain only default URP shaders.
If transparency makes object disappear you should check transparency mask in urp forward renderer data asset.

The script is based on detecting colliders between camera and the player, so that the script works properly 
each object has to have collider on it.

Each property in EasyObjectsFade.cs script has a Tooltip, so you can easily understand how to adjust script to
your needs.

You can also easily change FadeIn and FadeOut functions so they could work with you custom shader with custom
technique for changing opacity.


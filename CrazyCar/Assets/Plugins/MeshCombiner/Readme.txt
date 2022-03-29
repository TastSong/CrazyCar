/*
[README COMBINE]
Same Material - Combine Static Meshes
Lylek Games

[COMBINED STATIC MESHES]
FOR USE IN THE EDITOR!
This script is design to combine multipl meshes (with the same material) into a single mesh. To do this,
first create an empty game object, then drag and your meshes inside so that they are children of the empty gameobject.
Now simply select the empty game object and press Tools > Combine > Static Meshes! All done! Feel free to take a look
at the components of the once empty game object. You will find that the CombineMeshes script has been added. You may
use this script to revert the empty game object back to normal and restore (set active) the child meshes.

[Update 1.1.3]
- Added precautions to prevent improper use of the combine script. (Do not add the script to objects with existing mesh data).

[Update 1.1.2]
- You can now save your combined meshes as prefabs! After using the combine method, a save option will be available
in the Editor, via the CombineMeshes script, attached to the combined gameObject.

- Your prefab, as well as the mesh data that is created, will be named the name of your GameObject. Saving gameObjects
of identical names may override existing prefabs.

- You have the option to save destructive or non destructive. Saving destructive will destroy all child gameObjects.
Saving non destructive will preserve all child gameObjects.


VIDEO DEMO: https://www.youtube.com/watch?v=cLUvJ1P010A

I have included a 'RateStaticMeshCombiner' script which will propmpt the user (you!) to rate this asset. This prompt
should only ever appear the one time, regarless of your choice. If there are any issues with this prompt, please let
me know, or simply delete the script located directly in the CombineMeshes folder. Thanks!

[SUPPORT]
We do our best to make our assets as user-friendly as possible; please, by all means, do not hesitate to send us an email if you have any questions or comments!
support@lylekgames.com, or visit http://www.lylekgames.com/contacts

**Please leave a rating and review! Even a small review may help immensely with prioritizing updates.**
(Assets with few and infrequent reviews/ratings tend to have less of a priority and my be late or miss-out on crucial compatibility updates, or even be depricated.)
Thank you! =)

*******************************************************************************************

Website
http://www.lylekgames.com/

Support
http://www.lylekgames.com/contacts
*/

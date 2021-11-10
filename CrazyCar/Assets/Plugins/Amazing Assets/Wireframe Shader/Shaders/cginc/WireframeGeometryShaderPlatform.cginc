#ifndef WIREFRAME_GEOMETRY_SHADER_PLATFORM_CGINC
#define WIREFRAME_GEOMETRY_SHADER_PLATFORM_CGINC


//DEFINE COMPILATION PLATFORM HERE 
//↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓
#pragma target 5.0


//After changing compilation target:
//1) Save this file
//2) Reimport shaders (right click on 'Amazing Assets\Wireframe Shader\Shaders' folder and choose Reimport)



//#pragma target 4.0
 
//     •  DX11 shader model 4.0.
//     •  Supported on DX11+, OpenGL 3.2+, OpenGL ES 3.1+AEP, PS4/XB1 consoles.
//     •  Not supported on DX9, DX11 9.x (WinPhone), OpenGL ES 2.0/3.0/3.1, Metal.
//     •  Has geometry shaders and everything that es3.0 target has.



//#pragma target 4.6 (or gl4.1)

//     •  OpenGL 4.1 capabilities (DX11 SM5.0 on D3D platforms, just without compute shaders). This is basically the highest OpenGL level supported by Macs.
//     •  Supported on DX11+ SM5.0, OpenGL 4.1+, OpenGL ES 3.1+AEP, PS4/XB1 consoles.
//     •  Not supported on DX9, DX11 before SM5.0, OpenGL before 4.1, OpenGL ES 2.0/3.0/3.1, Metal.



//#pragma target 5.0

//     •  DX11 shader model 5.0.
//     •  Supported on DX11+ SM5.0, OpenGL 4.3+, OpenGL ES 3.1+AEP, PS4/XB1 consoles.
//     •  Not supported on DX9, DX11 before SM5.0, OpenGL before 4.3 (i.e. Mac), OpenGL ES 2.0/3.0/3.1, Metal.


//More info is here http://docs.unity3d.com/Manual/SL-ShaderCompileTargets.html



#endif

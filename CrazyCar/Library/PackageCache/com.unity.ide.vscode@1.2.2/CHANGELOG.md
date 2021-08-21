# Code Editor Package for Visual Studio Code

## [1.2.2] - 2020-09-04

VSC-14 - synchronize solution file when adding new assembly


## [1.2.1] - 2020-05-15

Source filtering adds support for asmref


## [1.2.0] - 2020-03-04

Do not reference projects that has not been generated (case 1211057)
Only open files that exists (case 1188394)
Add individual toggle buttons for generating csprojects for packages
Add support for Roslyn analyzers in project generation through csc.rsp and compiled assembly references
Remove Release build target from csproj and sln


## [1.1.4] - 2020-01-02

Delta project generation, only recompute the csproj files whose script modified.


## [1.1.3] - 2019-10-22

Exe version of vscode will use Normal ProcessWindowStyle while cmd will use Hidden


## [1.1.2] - 2019-08-30

Fixing OSX open command arguments


## [1.1.1] - 2019-08-19

Support for Player Project. Generates specific csproj files containing files, reference, defines,
etc. that will show how the assembly will be compiled for a target platform.


## [1.1.0] - 2019-08-07

Adds support for choosing extensions to be opened with VSCode. This can be done through the GUI in Preferences.
Avoids opening all extensions after the change in core unity.


## [1.0.7] - 2019-05-15

Fix various OSX specific issues.
Generate project on load if they are not generated.
Fix path recognition.


## [1.0.6] - 2019-04-30

Ensure asset database is refreshed when generating csproj and solution files.

## [1.0.5] - 2019-04-27

Add support for generating all csproj files.

## [1.0.4] - 2019-04-18

Fix relative package paths.
Fix opening editor on mac.
Add %LOCALAPPDATA%/Programs to the path of install paths.

## [1.0.3] - 2019-01-01

### This is the first release of *Unity Package vscode_editor*.

Using the newly created api to integrate Visual Studio Code with Unity.

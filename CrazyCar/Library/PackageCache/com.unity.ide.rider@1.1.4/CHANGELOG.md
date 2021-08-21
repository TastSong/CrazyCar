# Code Editor Package for Rider

## [1.1.4] - 2019-11-21

fix warning - unreachable code


## [1.1.3] - 2019-10-17

 - Update External Editor, when new toolbox build was installed
 - Add xaml to default list of extensions to include in csproj
 - Avoid initializing Rider package in secondary Unity process, which does Asset processing
 - Reflect multiple csc.rsp arguments to generated csproj files: https://github.com/JetBrains/resharper-unity/issues/1337
 - Setting, which allowed to override LangVersion removed in favor of langversion in csc.rsp
 - Environment.NewLine is used in generated project files instead of Windows line separator.

## [1.1.2] - 2019-09-18

performance optimizations:
 - avoid multiple evaluations
 - avoid reflection in DisableSyncSolutionOnceCallBack
 - project generation optimization
fixes:
 - avoid compilation error with incompatible `Test Framework` package

## [1.1.1] - 2019-08-26

parse nowarn in csc.rsp
warning, when Unity was started from Rider, but external editor was different
improved unit test support
workaround to avoid Unity internal project-generation (fix #28)


## [1.1.0] - 2019-07-02

new setting to manage list of extensions to be opened with Rider
avoid breaking everything on any unhandled exception in RiderScriptEditor cctor
hide Rider settings, when different Editor is selected
dynamically load only newer rider plugins
path detection (work on unix symlinks)
speed up for project generation
lots of bug fixing

## [1.0.8] - 2019-05-20

Fix NullReferenceException when External editor was pointing to non-existing Rider everything was broken by null-ref.

## [1.0.7] - 2019-05-16

Initial migration steps from rider plugin to package.
Fix OSX check and opening of files.

## [1.0.6] - 2019-04-30

Ensure asset database is refreshed when generating csproj and solution files.

## [1.0.5] - 2019-04-27

Add support for generating all csproj files.

## [1.0.4] - 2019-04-18

Fix relative package paths.
Fix opening editor on mac.

## [1.0.3] - 2019-04-12

Fixing null reference issue for callbacks to Asset pipeline.

## [1.0.2] - 2019-01-01

### This is the first release of *Unity Package rider_editor*.

Using the newly created api to integrate Rider with Unity.

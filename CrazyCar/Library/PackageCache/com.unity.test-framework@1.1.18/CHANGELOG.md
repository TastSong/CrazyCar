# Changelog
## [1.1.18] - 2020-10-07
- Fixed issue of timeout during UnitySetUp which wasn't detected and allowed the test to pass instead of failing (case DSTR-21)

## [1.1.17] - 2020-10-05
- Fixed an issue where the WaitForDomainReload yield instruction would sometimes let the test continue for one frame before the domain reload.
- Added support for negation in filters using !. E.g. !CategoryToExclude.
- Fixed an issue where if the first test enters PlayMode from UnitySetup then the test body will not run on consecutive runs (case 1260901). 
- Clear Results button clears the test results in the GUI (DSTR-16)
- Improved UI in Test Runner window, added new options:
	- Run Selected Tests in player
	- Build/Export project with all tests in player
	- Build/Export project with selected tests in player
- Fixed issue on loading EditMode or Playmode test tree in the wrong tab when switching between tabs when TestRunner is loading (DS-865)

## [1.1.16] - 2020-07-09
- Follow up on fix when UTF picks up on outdated compilation errors

## [1.1.15] - 2020-07-02
- Fixed an issue where an exception is thrown on getting the enumerator of a UnityTest would result in stopping the test run instead of failing it (case 1212000).
- Including a trailing semi-colon in a testName filter no longer results in all tests being run (case 1171200).
- Fixed and issue when Unity Test Framework exits editor on an outdated script compilation error (during api updates)

## [1.1.14] - 2020-04-03
- Added the 'assemblyNames' command line argument for filtering on the assembly level.
- The dll and project level of the tree view should now correctly show the results when running tests in a player (case 1197026).
- Optimize usage of player connection when transfering test results (case 1229200).
- Ignore internal test framework tests assertions (case 1206961).

## [1.1.13] - 2020-03-16
- Fixed an issue where a combination of Entering / Exiting playmode and recompiling scripts would result in the test run repeating (case 1213958).
- Fixed a regression from 1.1.12 where prefabs left in the scene would be cleaned up to aggressively.
- Fixed Test execution timed out. No activity received from the player in 600 seconds error when player is not supposed to start (case 1225147)

## [1.1.12] - 2020-03-02
- Now 'Open error line' for a failed UTF test does not throw exceptions for corrupted testable pdb in Editor release mode (case 1118259)
- Fixed an issue where running a test fixture would also run other fixtures with the same full name (namespace plus classname) in other assemblies (case 1197385).
- Running tests with the same full name, with a domain reload inbetween, will no longer fail to initialize the fixture of the second class (case 1205240).
- Running a playmode tests with "Maximize on Play" will now correctly show the result of the tests in the test runner window (case 1014908).
- Fixed an issue where leaving a game object in a scene with a DontSaveInEditor hideFlags would result in an error on cleanup (case 1136883).
- Now ITestPlayerBuildModifier.ModifyOptions is called as expected when running tests on a device (case 1213845)

## [1.1.11] - 2020-01-16
- Fixed test runner dlls got included into player build (case 1211624)
- Passing a non-full-path of XML file for -testResults in Unity Batchmode issue resolved, now passing "result.xml" creates the result file in the project file directory (case 959078)
- Respect Script Debugging build setting when running tests

## [1.1.10] - 2019-12-19
- Introduced PostSuccessfulLaunchAction callback
- Fixed an issue where canceling a UnityTest while it was running would incorrectly mark it as passed instead of canceled.
- Added command line argument for running tests synchronously.
- The test search bar now handles null values correctly.
- The test output pane now retains its size on domain reloads.

## [1.1.9] - 2019-12-12
- Rolled back refactoring to the test run system, as it caused issues in some corner cases.

## [1.1.8] - 2019-11-15
- Ensured that a resumed test run is continued instantly. 

## [1.1.7] - 2019-11-14
- Fixed an issue with test runs after domain reload.

## [1.1.6] - 2019-11-12
- Building a player for test will no longer look in unrelated assemblies for relevant attributes.

## [1.1.5] - 2019-10-23
- Fixed a regression to synchronous runs introduced in 1.1.4.

## [1.1.4] - 2019-10-15
- Running tests in batch mode now correctly returns error code 3 (RunError) when a timeout or a build error occurs.
- Fixed an issue where a test run in a player would time out, if the player takes longer than 10 minutes to run.
- Added command line argument and api setting for specifying custom heartbeat timeout for running on players.

## [1.1.3] - 2019-09-23
- Fixed a regression where tests in a player would report a timeout after a test run is finished.
- Made it possible for the ui to change its test items when the test tree changes without script compilation.
- Added synchronous runs as an option to the TestRunnerApi.

## [1.1.2] - 2019-09-11
- Fixed an issue where Run Selected would run all tests in the category, if a category filter was selected, regardless of what tests were selected.
- Unsupported attributes used in UnityTests now give an explicit error.
- Added support for the Repeat and Retry attributes in UnityTests (case 1131940).
- Tests with a explicit timeout higher than 10 minutes, no longer times out after running longer than 10 minutes when running from command line (case 1125991).
- Fixed a performance regression in the test runner api result reporting, introduced in 2018.3 (case 1109865).
- Fixed an issue where parameterized test fixtures would not run if selected in the test tree (case 1092244).
- Pressing Clear Results now also correctly clears the counters on the test list (case 1181763).
- Prebuild setup now handles errors logged with Debug.LogError and stops the run if any is logged (case 1115240). It now also supports LogAssert.Expect.

## [1.1.1] - 2019-08-07
- Tests retrieved as a test list with the test runner api incorrectly showed both mode as their TestMode.
- Fixed a compatibility issue with running tests from rider.

## [1.1.0] - 2019-07-30
- Introduced the TestRunnerApi for running tests programmatically from elsewhere inside the Editor.
- Introduced yield instructions for recompiling scripts and awaiting a domain reload in Edit Mode tests.
- Added a button to the Test Runner UI for clearing the results.

## [1.0.18] - 2019-07-15
- Included new full documentation of the test framework.

## [1.0.17] - 2019-07-11
- Fixed an issue where the Test Runner window wouldn’t frame selected items after search filter is cleared.
- Fixed a regression where playmode test application on the IOS platform would not quit after the tests are done.

## [1.0.16] - 2019-06-20
- Fixed an issue where the Test Runner window popped out if it was docked, or if something else was docked next to it, when re-opened (case 1158961)
- Fixed a regression where the running standalone playmode tests from the ui would result in an error.

## [1.0.15] - 2019-06-18
- Added new `[TestMustExpectAllLogs]` attribute, which automatically does `LogAssert.NoUnexpectedReceived()` at the end of affected tests. See docs for this attribute for more info on usage.
- Fixed a regression where no tests would be run if multiple filters are specified. E.g. selecting both a whole assembly and an individual test in the ui.
- Fixed an issue where performing `Run Selected` on a selected assembly would run all assemblies.
- Introduced the capability to do a split build and run, when running playmode tests on standalone devices.
- Fixed an error in ConditionalIgnore, if the condition were not set.

## [1.0.14] - 2019-05-27
- Fixed issue preventing scene creation in IPrebuildSetup.Setup callback when running standalone playmode tests.
- Fixed an issue where test assemblies would sometimes not be ordered alphabetically.
- Added module references to the package for the required modules: imgui and jsonserialize.
- Added a ConditionalIgnore attribute to help ignoring tests only under specific conditions.
- Fixed a typo in the player test window (case 1148671).

## [1.0.13] - 2019-05-07
- Fixed a regression where results from the player would no longer update correctly in the UI (case 1151147).

## [1.0.12] - 2019-04-16
- Added specific unity release to the package information.

## [1.0.11] - 2019-04-10
- Fixed a regression from 1.0.10 where test-started events were triggered multiple times after a domain reload.

## [1.0.10] - 2019-04-08
- Fixed an issue where test-started events would not be fired correctly after a test performing a domain reload (case 1141530).
- The UI should correctly run tests inside a nested class, when that class is selected.
- All actions should now correctly display a prefix when reporting test result. E.g. "TearDown :".
- Errors logged with Debug.LogError in TearDowns now append the error, rather than overwriting the existing result (case 1114306).
- Incorrect implementations of IWrapTestMethod and IWrapSetUpTearDown now gives a meaningful error.
- Fixed a regression where the Test Framework would run TearDown in a base class before the inheriting class (case 1142553).
- Fixed a regression introduced in 1.0.9 where tests with the Explicit attribute could no longer be executed.

## [1.0.9] - 2019-03-27
- Fixed an issue where a corrupt instance of the test runner window would block for a new being opened.
- Added the required modules to the list of package requirements.
- Fixed an issue where errors would happen if the test filter ui was clicked before the ui is done loading.
- Fix selecting items with duplicate names in test hierarchy of Test Runner window (case 987587).
- Fixed RecompileScripts instruction which we use in tests (case 1128994).
- Fixed an issue where using multiple filters on tests would sometimes give an incorrect result.

## [1.0.7] - 2019-03-12
### This is the first release of *Unity Package com.unity.test-framework*.

- Migrated the test-framework from the current extension in unity.

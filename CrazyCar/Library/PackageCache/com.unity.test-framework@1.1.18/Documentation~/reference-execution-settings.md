# ExecutionSettings
The `ExecutionSettings` is a set of filters and other settings provided when running a set of tests from the [TestRunnerApi](./reference-test-runner-api.md).

## Constructors

| Syntax                                                | Description                                              |
| ----------------------------------------------------- | -------------------------------------------------------- |
| `ExecutionSettings(params Filter[] filtersToExecute)` | Creates an instance with a given set of filters, if any. |

## Fields

| Syntax                       | Description                                                  |
| ---------------------------- | ------------------------------------------------------------ |
| `Filter[] filters`          | A collection of [Filters](./reference-filter.md) to execute tests on. |
| `ITestRunSettings overloadTestRunSettings` | An instance of [ITestRunSettings](./reference-itest-run-settings.md) to set up before running tests on a Player. |
| `bool runSynchronously`     | If true, the call to `Execute()` will run tests synchronously, guaranteeing that all tests have finished running by the time the call returns. Note that this is only supported for EditMode tests, and that tests which take multiple frames (i.e. `[UnityTest]` tests, or tests with `[UnitySetUp]` or `[UnityTearDown]` scaffolding) will be filtered out. |
| 'int playerHeartbeatTimeout' | The time, in seconds, the editor should wait for heartbeats after starting a test run on a player. This defaults to 10 minutes. |
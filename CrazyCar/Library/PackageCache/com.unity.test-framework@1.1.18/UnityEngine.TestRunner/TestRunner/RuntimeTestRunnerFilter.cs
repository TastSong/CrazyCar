using System;
using System.Collections.Generic;
using System.Linq;
using NUnit.Framework.Interfaces;
using NUnit.Framework.Internal;
using NUnit.Framework.Internal.Filters;
using UnityEngine.TestRunner.NUnitExtensions.Filters;

namespace UnityEngine.TestTools.TestRunner.GUI
{
    [Serializable]
    internal class RuntimeTestRunnerFilter
    {
        public string[] assemblyNames;
        public string[] groupNames;
        public string[] categoryNames;
        public string[] testNames;
        public bool synchronousOnly = false;
        
        public ITestFilter BuildNUnitFilter()
        {
            var filters = new List<ITestFilter>();

            AddFilters(filters, testNames, (s) => new FullNameFilter(s));
            AddFilters(filters, groupNames, (s) => new FullNameFilter(s) {IsRegex = true});
            AddFilters(filters, assemblyNames, (s) => new AssemblyNameFilter(s));
            AddFilters(filters, categoryNames, (s) => new CategoryFilterExtended(s) {IsRegex = true});

            if (synchronousOnly)
            {
                filters.Add(new SynchronousFilter());
            }

            return filters.Count == 0 ? TestFilter.Empty : new AndFilter(filters.ToArray());
        }

        private static void AddFilters(List<ITestFilter> filters, string[] values, Func<string, TestFilter> builder)
        {
            if (values == null || values.Length == 0)
            {
                return;
            }

            var inclusionFilters = values.Where(v => !v.StartsWith("!")).Select(v => builder(v) as ITestFilter).ToArray();
            var exclusionFilters = values.Where(v => v.StartsWith("!"))
                .Select(v => new NotFilter(builder(v.Substring(1))) as ITestFilter)
                .ToArray();
            if (inclusionFilters.Length > 0 && exclusionFilters.Length > 0)
            {
                filters.Add(new AndFilter(new OrFilter(inclusionFilters), new AndFilter(exclusionFilters)));
            }
            else if (inclusionFilters.Length > 0)
            {
                filters.Add(new OrFilter(inclusionFilters));
            }
            else // Only exclusionFilters
            {
                filters.Add(new AndFilter(exclusionFilters));
            }
        }
    }
}

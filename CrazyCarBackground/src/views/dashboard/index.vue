<template>
  <div class="dashboard-editor-container">
    <panel-group @handleSetLineChartData="handleSetLineChartData" />
    <el-row style="background:#fff;padding:16px 16px 0;margin-bottom:32px;">
      <line-chart :chart-data="lineChartData" />
    </el-row>

    <el-row :gutter="32">
      <el-col :xs="24" :sm="24" :lg="8">
        <div class="chart-wrapper">
          <pie-chart />
        </div>
      </el-col>
      <el-col :xs="24" :sm="24" :lg="8">
        <div class="chart-wrapper">
          <pie-chart />
        </div>
      </el-col>
      <el-col :xs="24" :sm="24" :lg="8">
        <div class="chart-wrapper">
          <pie-chart />
        </div>
      </el-col>
    </el-row>
  </div>
</template>

<script>
import LineChart from './components/LineChart'
import { getLineData } from '@/api/chart'
import PieChart from './components/PieChart'
import PanelGroup from './components/PanelGroup'

export default {
  name: 'DashboardAdmin',
  components: {
    LineChart,
    PieChart,
    PanelGroup
  },
  data() {
    return {
      lineChartData: { data: [1, 2, 3, 4, 5, 6, 7], actualData: [240, 10, 91, 154, 162, 140, 145] }
    }
  },
  created() {
  },
  methods: {
    handleSetLineChartData() {
      this.loading = true
      getLineData().then(response => {
        console.log('++++++ get line data : ' + JSON.stringify(response.data.items))
        var date = []
        var actualData = []
        var x
        for (x in response.data.items) {
          var time = new Date(response.data.items[x].timestamp)
          console.log(time)
          date.push(time.getMonth() + '.' + time.getDay())
          actualData.push(response.data.items[x].data)
        }
        this.lineChartData = { date: date, actualData: actualData }
      })
    },
    handleUpdate() {
      this.handleSetLineChartData()
    }
  }
}
</script>

<style lang="scss" scoped>
.dashboard-editor-container {
  padding: 32px;
  background-color: rgb(240, 242, 245);
  position: relative;

  .github-corner {
    position: absolute;
    top: 0px;
    border: 0;
    right: 0;
  }

  .chart-wrapper {
    background: #fff;
    padding: 16px 16px 0;
    margin-bottom: 32px;
  }
}

@media (max-width:1024px) {
  .chart-wrapper {
    padding: 8px;
  }
}
</style>

<template>
  <div class="dashboard-editor-container">
    <panel-group :panel-info-data="panelInfoData" @handleSetLineChartData="handleGetDashboardData" />
    <el-row style="background:#fff;padding:16px 16px 0;margin-bottom:32px;">
      <line-chart :chart-data="lineChartData" />
    </el-row>

    <el-row :gutter="32">
      <el-col :xs="24" :sm="24" :lg="8">
        <div class="chart-wrapper">
          <line-chart :chart-data="lineChartData" />
        </div>
      </el-col>
      <el-col :xs="24" :sm="24" :lg="8">
        <div class="chart-wrapper">
          <line-chart :chart-data="lineChartData" />
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
import { getDashboardData } from '@/api/dashboard'
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
      lineChartData: { name: 'login user num', data: [1, 2, 3, 4, 5, 6, 7], actualData: [0, 0, 0, 0, 0, 0, 0] },
      panelInfoData: [0, 0, 0, 0]
    }
  },
  created() {
    this.handleGetDashboardData()
  },
  methods: {
    handleGetDashboardData() {
      this.loading = true
      getDashboardData().then(response => {
        // --------panel data
        var panelInfoData = []
        panelInfoData.push(response.user_num)
        panelInfoData.push(response.equip_num)
        panelInfoData.push(response.avatar_num)
        panelInfoData.push(response.map_num)
        this.panelInfoData = panelInfoData
        // ---------login user num
        var login_user_num = response.login_user_num
        var date = []
        var actualData = []
        var x
        for (x in login_user_num) {
          var time = new Date(login_user_num[x].timestamp)
          date.push(time.getMonth() + '.' + time.getDay())
          actualData.push(login_user_num[x].data)
        }
        console.log('==+++++' + date)
        this.lineChartData = { name: '用户登录数', date: date, actualData: actualData }
        // ------------t----------
      })
    },
    handleUpdate() {
      this.getDashboardData()
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

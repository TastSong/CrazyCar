<template>
  <div class="dashboard-editor-container">
    <panel-group :panel-info-data="panelInfoData" />
    <el-row style="background:#fff;padding:16px 16px 0;margin-bottom:32px;">
      <line-chart :chart-data="loginUserChartData" />
    </el-row>

    <el-row :gutter="32">
      <el-col :xs="24" :sm="24" :lg="8">
        <div class="chart-wrapper">
          <line-chart :chart-data="timeTrialChartData" />
        </div>
      </el-col>
      <el-col :xs="24" :sm="24" :lg="8">
        <div class="chart-wrapper">
          <line-chart :chart-data="matchChartData" />
        </div>
      </el-col>
      <el-col :xs="24" :sm="24" :lg="8">
        <div class="chart-wrapper">
          <pie-chart :chart-data="timeTrialMatchData" />
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
      loginUserChartData: { name: '', data: [0], actualData: [0] },
      timeTrialChartData: { name: '', data: [0], actualData: [0] },
      matchChartData: { name: '', data: [0], actualData: [0] },
      panelInfoData: [0, 0, 0, 0],
      timeTrialMatchData: [0, 0]
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
        var login_user_date = []
        var login_user_actualData = []
        var login_user_x
        for (login_user_x in login_user_num) {
          var login_user_time = new Date(login_user_num[login_user_x].timestamp * 1000)
          login_user_date.push(login_user_time.getMonth() + '.' + login_user_time.getDay())
          login_user_actualData.push(login_user_num[login_user_x].count)
        }
        this.loginUserChartData = { name: '用户登录数', date: login_user_date, actualData: login_user_actualData }
        // ---------
        var match_num = response.match_num
        var match_date = []
        var match_actualData = []
        var match_x
        for (match_x in match_num) {
          var match_time = new Date(match_num[match_x].timestamp * 1000)
          match_date.push(match_time.getMonth() + '.' + match_time.getDay())
          match_actualData.push(match_num[match_x].count)
        }
        this.timeTrialChartData = { name: '比赛使用次数', date: match_date, actualData: match_actualData }
        // ---------
        var time_trial_num = response.time_trial_num
        var time_trial_date = []
        var time_trial_actualData = []
        var time_trial_x
        for (time_trial_x in time_trial_num) {
          var time_trial_time = new Date(time_trial_num[time_trial_x].timestamp * 1000)
          time_trial_date.push(time_trial_time.getMonth() + '.' + time_trial_time.getDay())
          time_trial_actualData.push(time_trial_num[time_trial_x].count)
        }
        this.matchChartData = { name: '计时赛使用次数', date: time_trial_date, actualData: time_trial_actualData }
        // ----------------------
        var timeTrialMatchData = []
        timeTrialMatchData.push(response.time_trial_times)
        timeTrialMatchData.push(response.match_times)
        this.timeTrialMatchData = timeTrialMatchData
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

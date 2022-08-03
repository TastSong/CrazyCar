<template>
  <div class="app-container">
    <el-table
      :key="tableKey"
      v-loading="listLoading"
      :data="list"
      border
      fit
      highlight-current-row
      style="width: 100%;"
      @sort-change="sortChange"
    >
      <el-table-column label="Cid" prop="cid" sortable="custom" align="center" width="80" :class-name="getSortClass('cid')">
        <template slot-scope="{row}">
          <span>{{ row.cid }}</span>
        </template>
      </el-table-column>
      <el-table-column label="Map Id" min-width="150px">
        <template slot-scope="{row}">
          <span>{{ row.map_id }}</span>
        </template>
      </el-table-column>
      <el-table-column label="Class Name" min-width="150px">
        <template slot-scope="{row}">
          <span>{{ row.class_name }}</span>
        </template>
      </el-table-column>
      <el-table-column label="Star" min-width="150px">
        <template slot-scope="{row}">
          <span>{{ row.star }}</span>
        </template>
      </el-table-column>
      <el-table-column label="Limit Time" min-width="150px">
        <template slot-scope="{row}">
          <span>{{ row.limit_time }}</span>
        </template>
      </el-table-column>
      <el-table-column label="Times" min-width="150px">
        <template slot-scope="{row}">
          <span>{{ row.times }}</span>
        </template>
      </el-table-column>
      <el-table-column label="Water" min-width="150px">
        <template slot-scope="{row}">
          <span>{{ row.has_water }}</span>
        </template>
      </el-table-column>
      <el-table-column label="Actions" align="center" width="230" class-name="small-padding fixed-width">
        <template slot-scope="{row}">
          <el-button type="primary" size="mini" @click="handleUpdate(row)">
            Edit
          </el-button>
        </template>
      </el-table-column>
    </el-table>

    <pagination v-show="total>0" :total="total" :page.sync="listQuery.page" :limit.sync="listQuery.limit" @pagination="getList" />

    <el-dialog title="Update Match" :visible.sync="dialogFormVisible">
      <el-form ref="dataForm" :rules="rules" :model="temp" label-position="left" label-width="108px" style="width: 400px; margin-left:50px;">
        <el-form-item label="Class Name" prop="class_name">
          <el-input v-model="temp.class_name" />
        </el-form-item>
        <el-form-item label="Star" prop="star">
          <el-input v-model.number="temp.star" />
        </el-form-item>
        <el-form-item label="Map Id" prop="map_id">
          <el-input v-model.number="temp.map_id" />
        </el-form-item>
        <el-form-item label="Limit Time" prop="limit_time">
          <el-input v-model.number="temp.limit_time" />
        </el-form-item>
        <el-form-item label="Times" prop="times">
          <el-input v-model.number="temp.times" />
        </el-form-item>
        <el-form-item label="Water" prop="has_water">
          <el-switch v-model="temp.has_water" />
        </el-form-item>
      </el-form>
      <div slot="footer" class="dialog-footer">
        <el-button @click="dialogFormVisible = false">
          Cancel
        </el-button>
        <el-button type="primary" @click="updateData()">
          Confirm
        </el-button>
      </div>
    </el-dialog>

    <el-dialog :visible.sync="dialogPvVisible" title="Reading statistics">
      <el-table :data="pvData" border fit highlight-current-row style="width: 100%">
        <el-table-column prop="key" label="Channel" />
        <el-table-column prop="pv" label="Pv" />
      </el-table>
      <span slot="footer" class="dialog-footer">
        <el-button type="primary" @click="dialogPvVisible = false">Confirm</el-button>
      </span>
    </el-dialog>
  </div>
</template>

<script>
import waves from '@/directive/waves' // waves directive
import { parseTime } from '@/utils'
import Pagination from '@/components/Pagination' // secondary package based on el-pagination
import { getMatchInfos, updtaeMatchInfo } from '@/api/match'

export default {
  name: 'Match',
  components: { Pagination },
  directives: { waves },
  filters: {
  },
  data() {
    return {
      tableKey: 0,
      list: null,
      total: 0,
      listLoading: true,
      listQuery: {
        page: 1,
        limit: 20,
        importance: undefined,
        title: undefined,
        type: undefined,
        sort: '+cid'
      },
      sortOptions: [{ label: 'ID Ascending', key: '+cid' }, { label: 'ID Descending', key: '-cid' }],
      showReviewer: false,
      temp: {
        cid: undefined,
        class_name: '',
        map_id: 0,
        limit_time: 0,
        star: 0,
        times: 0,
        has_water: false
      },
      dialogFormVisible: false,
      dialogPvVisible: false,
      pvData: [],
      rules: {
        class_name: [{ required: true, message: 'name is required', trigger: 'change' }],
        star: [{ required: true, message: 'star is required', type: 'number', trigger: 'change' }],
        map_id: [{ required: true, message: 'map id is required', type: 'number', trigger: 'change' }],
        limit_time: [{ required: true, message: 'limit time is required', type: 'number', trigger: 'change' }],
        times: [{ required: true, message: 'times is required', type: 'number', trigger: 'change' }]
      },
      downloadLoading: false,
      parseTime: parseTime
    }
  },
  created() {
    this.getList()
  },
  methods: {
    getList() {
      this.listLoading = true
      getMatchInfos(this.listQuery).then(response => {
        this.list = response.items
        this.total = response.total
        this.listLoading = false
      })
    },
    handleFilter() {
      this.listQuery.page = 1
      this.getList()
    },
    sortChange(data) {
      const { prop, order } = data
      if (prop === 'cid') {
        this.sortByID(order)
      }
    },
    sortByID(order) {
      if (order === 'ascending') {
        this.listQuery.sort = '+cid'
      } else {
        this.listQuery.sort = '-cid'
      }
      this.handleFilter()
    },
    resetTemp() {
      this.temp = {
        cid: undefined,
        class_name: '',
        map_id: 0,
        limit_time: 0,
        star: 0,
        times: 0,
        has_water: false
      }
    },
    handleUpdate(row) {
      this.temp = Object.assign({}, row) // copy obj
      this.dialogFormVisible = true
      this.$nextTick(() => {
        this.$refs['dataForm'].clearValidate()
      })
    },
    updateData() {
      this.$refs['dataForm'].validate((valid) => {
        if (valid) {
          const tempData = Object.assign({}, this.temp)
          updtaeMatchInfo(tempData).then(response => {
            const index = this.list.findIndex(v => v.cid === response.cid)
            this.list.splice(index, 1, response)
            this.dialogFormVisible = false
            this.$notify({
              title: 'Success',
              message: 'Update Successfully',
              type: 'success',
              duration: 2000
            })
          })
        }
      })
    },
    formatJson(filterVal) {
      return this.list.map(v => filterVal.map(j => {
        if (j === 'timestamp') {
          return parseTime(v[j])
        } else {
          return v[j]
        }
      }))
    },
    getSortClass: function(key) {
      const sort = this.listQuery.sort
      return sort === `+${key}` ? 'ascending' : 'descending'
    }
  }
}
</script>

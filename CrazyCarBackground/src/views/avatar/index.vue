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
      <el-table-column label="Aid" prop="aid" sortable="custom" align="center" width="80" :class-name="getSortClass('aid')">
        <template v-slot="{row}">
          <span>{{ row.aid }}</span>
        </template>
      </el-table-column>
      <el-table-column label="Rid" min-width="150px">
        <template v-slot="{row}">
          <span>{{ row.rid }}</span>
        </template>
      </el-table-column>
      <el-table-column label="Avatar Name" min-width="150px">
        <template v-slot="{row}">
          <span>{{ row.avatar_name }}</span>
        </template>
      </el-table-column>
      <el-table-column label="Star" min-width="150px">
        <template v-slot="{row}">
          <span>{{ row.star }}</span>
        </template>
      </el-table-column>
      <el-table-column label="Actions" align="center" width="230" class-name="small-padding fixed-width">
        <template v-slot="{row}">
          <el-button type="primary" size="mini" @click="handleUpdate(row)">
            Edit
          </el-button>
        </template>
      </el-table-column>
    </el-table>

    <pagination v-show="total>0" :total="total" :page.sync="listQuery.page" :limit.sync="listQuery.limit" @pagination="getList" />

    <el-dialog title="Update Avatar" :visible.sync="dialogFormVisible">
      <el-form ref="dataForm" :rules="rules" :model="temp" label-position="left" label-width="108px" style="width: 400px; margin-left:50px;">
        <el-form-item label="Rid" prop="rid">
          <el-input v-model="temp.rid" />
        </el-form-item>
        <el-form-item label="Avatar Name" prop="avatar_name">
          <el-input v-model="temp.avatar_name" />
        </el-form-item>
        <el-form-item label="Star" prop="star">
          <el-input v-model.number="temp.star" />
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
import Pagination from '@/components/Pagination' // secondary package based on el-pagination
import { getAvatarInfos, updateAvatarInfo } from '@/api/avatar'

export default {
  name: 'Avatar',
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
        sort: '+aid'
      },
      sortOptions: [{ label: 'ID Ascending', key: '+aid' }, { label: 'ID Descending', key: '-aid' }],
      showReviewer: false,
      temp: {
        aid: undefined,
        rid: '',
        avatar_name: '',
        star: 0
      },
      dialogFormVisible: false,
      dialogPvVisible: false,
      pvData: [],
      rules: {
        rid: [{ required: true, message: 'rid is required', trigger: 'change' }],
        avatar_name: [{ required: true, message: 'avatar_name is required', trigger: 'change' }],
        star: [{ required: true, message: 'star is required', type: 'number', trigger: 'change' }]
      },
      downloadLoading: false
    }
  },
  created() {
    this.getList()
  },
  methods: {
    getList() {
      this.listLoading = true
      getAvatarInfos(this.listQuery).then(response => {
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
      if (prop === 'aid') {
        this.sortByID(order)
      }
    },
    sortByID(order) {
      if (order === 'ascending') {
        this.listQuery.sort = '+aid'
      } else {
        this.listQuery.sort = '-aid'
      }
      this.handleFilter()
    },
    resetTemp() {
      this.temp = {
        aid: undefined,
        rid: '',
        avatar_name: '',
        star: 0
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
          updateAvatarInfo(tempData).then(response => {
            const index = this.list.findIndex(v => v.aid === response.aid)
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
    getSortClass: function(key) {
      const sort = this.listQuery.sort
      return sort === `+${key}` ? 'ascending' : 'descending'
    }
  }
}
</script>

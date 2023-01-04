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
      <el-table-column label="Eid" prop="eid" sortable="custom" align="center" width="80" :class-name="getSortClass('eid')">
        <template v-slot="{row}">
          <span>{{ row.eid }}</span>
        </template>
      </el-table-column>
      <el-table-column label="Rid" min-width="150px">
        <template v-slot="{row}">
          <span>{{ row.rid }}</span>
        </template>
      </el-table-column>
      <el-table-column label="Equip Name" min-width="150px">
        <template v-slot="{row}">
          <span>{{ row.equip_name }}</span>
        </template>
      </el-table-column>
      <el-table-column label="Star" min-width="150px">
        <template v-slot="{row}">
          <span>{{ row.star }}</span>
        </template>
      </el-table-column>
      <el-table-column label="Mass" min-width="150px">
        <template v-slot="{row}">
          <span>{{ row.mass }}</span>
        </template>
      </el-table-column>
      <el-table-column label="Power" min-width="150px">
        <template v-slot="{row}">
          <span>{{ row.power }}</span>
        </template>
      </el-table-column>
      <el-table-column label="Max Power" min-width="150px">
        <template v-slot="{row}">
          <span>{{ row.max_power }}</span>
        </template>
      </el-table-column>
      <el-table-column label="Wade" min-width="150px">
        <template v-slot="{row}">
          <el-switch
            v-model="row.can_wade"
            @change="handleSwitchChange(row)"
          />
        </template>
      </el-table-column>
      <el-table-column label="Show" min-width="150px">
        <template v-slot="{row}">
          <el-switch
            v-model="row.is_show"
            @change="handleSwitchChange(row)"
          />
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

    <el-dialog title="Update Equip" :visible.sync="dialogFormVisible">
      <el-form ref="dataForm" :rules="rules" :model="temp" label-position="left" label-width="108px" style="width: 400px; margin-left:50px;">
        <el-form-item label="Rid" prop="rid">
          <el-input v-model="temp.rid" />
        </el-form-item>
        <el-form-item label="Equip Name" prop="equip_name">
          <el-input v-model="temp.equip_name" />
        </el-form-item>
        <el-form-item label="Star" prop="star">
          <el-input v-model.number="temp.star" />
        </el-form-item>
        <el-form-item label="Mass" prop="mass">
          <el-input v-model.number="temp.mass" />
        </el-form-item>
        <el-form-item label="Power" prop="power">
          <el-input v-model.number="temp.power" />
        </el-form-item>
        <el-form-item label="Max Power" prop="max_power">
          <el-input v-model.number="temp.max_power" />
        </el-form-item>
        <el-form-item label="Wade" prop="can_wade">
          <el-switch v-model="temp.can_wade" />
        </el-form-item>
        <el-form-item label="Show" prop="is_show">
          <el-switch v-model="temp.is_show" />
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
import { getEqiupInfos, updtaeEquipInfo } from '@/api/equip'

export default {
  name: 'Equip',
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
        sort: '+eid'
      },
      sortOptions: [{ label: 'ID Ascending', key: '+eid' }, { label: 'ID Descending', key: '-eid' }],
      showReviewer: false,
      temp: {
        eid: undefined,
        rid: '',
        equip_name: '',
        star: 0,
        mass: 0,
        power: 0,
        max_power: 0,
        can_wade: false,
        is_show: false
      },
      dialogFormVisible: false,
      dialogPvVisible: false,
      pvData: [],
      rules: {
        rid: [{ required: true, message: 'rid is required', trigger: 'change' }],
        equip_name: [{ required: true, message: 'equip name is required', trigger: 'change' }],
        star: [{ required: true, message: 'star is required', type: 'number', trigger: 'change' }],
        mass: [{ required: true, message: 'mass is required', type: 'number', trigger: 'change' }],
        max_power: [{ required: true, message: 'max power is required', type: 'number', trigger: 'change' }],
        power: [{ required: true, message: 'power is required', type: 'number', trigger: 'change' }]
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
      getEqiupInfos(this.listQuery).then(response => {
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
      if (prop === 'eid') {
        this.sortByID(order)
      }
    },
    sortByID(order) {
      if (order === 'ascending') {
        this.listQuery.sort = '+eid'
      } else {
        this.listQuery.sort = '-eid'
      }
      this.handleFilter()
    },
    resetTemp() {
      this.temp = {
        eid: undefined,
        rid: '',
        equip_name: '',
        star: 0,
        mass: 0,
        power: 0,
        max_power: 0,
        can_wade: false,
        is_show: false
      }
    },
    handleUpdate(row) {
      this.temp = Object.assign({}, row) // copy obj
      this.dialogFormVisible = true
      this.$nextTick(() => {
        this.$refs['dataForm'].clearValidate()
      })
    },
    handleSwitchChange(row) {
      const tempData = Object.assign({}, row)
      updtaeEquipInfo(tempData).then(response => {
        const index = this.list.findIndex(v => v.eid === response.eid)
        this.list.splice(index, 1, response)
        this.$notify({
          title: 'Success',
          message: 'Update Successfully',
          type: 'success',
          duration: 2000
        })
      })
    },
    updateData() {
      this.$refs['dataForm'].validate((valid) => {
        if (valid) {
          const tempData = Object.assign({}, this.temp)
          updtaeEquipInfo(tempData).then(response => {
            const index = this.list.findIndex(v => v.eid === response.eid)
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

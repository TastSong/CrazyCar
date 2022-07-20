import request from '@/utils/request'

export function getTestComplexTableData(query) {
  return request({
    url: '/vue-element-admin/table/test-complex/list',
    method: 'get',
    params: query
  })
}

export function createTestComplexTable(data) {
  return request({
    url: '/vue-element-admin/table/test-complex/create',
    method: 'post',
    data
  })
}

export function updateTestComplexTable(data) {
  return request({
    url: '/vue-element-admin/table/test-complex/update',
    method: 'post',
    data
  })
}

import request from '@/utils/request'

export function getTestComplexTableData(query) {
  return request({
    url: '/CrazyCarSpringBootServer/v2/Background/table/test-complex/list',
    method: 'get',
    params: query
  })
}

export function createTestComplexTable(data) {
  return request({
    url: '/CrazyCarSpringBootServer/v2/Background/table/test-complex/create',
    method: 'post',
    data
  })
}

export function updateTestComplexTable(data) {
  return request({
    url: '/CrazyCarSpringBootServer/v2/Background/table/test-complex/update',
    method: 'post',
    data
  })
}

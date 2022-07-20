import request from '@/utils/request'

export function getLineData() {
  return request({
    url: '/vue-element-admin/chart/line',
    method: 'get'
  })
}

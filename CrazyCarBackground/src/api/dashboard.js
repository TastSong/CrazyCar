import request from '@/utils/request'

export function getDashboardData() {
  return request({
    url: '/CrazyCarSpringBootServer/v2/Background/getDashboardData',
    method: 'get'
  })
}

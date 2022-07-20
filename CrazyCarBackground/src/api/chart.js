import request from '@/utils/request'

export function getLineData() {
  return request({
    url: '/CrazyCarSpringBootServer/v2/Background/chart/line',
    method: 'get'
  })
}

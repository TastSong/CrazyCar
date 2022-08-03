import request from '@/utils/request'

export function getMatchInfos(query) {
  return request({
    url: '/CrazyCarSpringBootServer/v2/Background/getMatchInfos',
    method: 'get',
    params: query
  })
}

export function updtaeMatchInfo(data) {
  return request({
    url: '/CrazyCarSpringBootServer/v2/Background/updtaeMatchInfo',
    method: 'post',
    data
  })
}

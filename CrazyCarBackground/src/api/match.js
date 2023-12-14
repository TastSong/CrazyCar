import request from '@/utils/request'

export function getMatchInfos(query) {
  return request({
    url: '/CrazyCarSpringBootServer/v2/Background/getMatchInfos',
    method: 'get',
    params: query
  })
}

export function updateMatchInfo(data) {
  return request({
    url: '/CrazyCarSpringBootServer/v2/Background/updateMatchInfo',
    method: 'post',
    data
  })
}

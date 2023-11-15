import request from '@/utils/request'

export function getVersionList(query) {
  return request({
    url: '/CrazyCarSpringBootServer/v2/Background/getVersionList',
    method: 'get',
    params: query
  })
}

export function updateVersion(data) {
  return request({
    url: '/CrazyCarSpringBootServer/v2/Background/updateVersion',
    method: 'post',
    data
  })
}

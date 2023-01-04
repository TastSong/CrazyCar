import request from '@/utils/request'

export function getAssetsInfo(query) {
  return request({
    url: '/CrazyCarSpringBootServer/v2/Background/getAssetsInfo',
    method: 'get',
    params: query
  })
}

export function updateAssetsInfo(data) {
  return request({
    url: '/CrazyCarSpringBootServer/v2/Background/updateAssetsInfo',
    method: 'post',
    data
  })
}

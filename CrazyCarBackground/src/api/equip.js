import request from '@/utils/request'

export function getEqiupInfos(query) {
  return request({
    url: '/CrazyCarSpringBootServer/v2/Background/getEqiupInfos',
    method: 'get',
    params: query
  })
}

export function updateEquipInfo(data) {
  return request({
    url: '/CrazyCarSpringBootServer/v2/Background/updateEquipInfo',
    method: 'post',
    data
  })
}

import request from '@/utils/request'

export function getEquipInfos(query) {
  return request({
    url: '/CrazyCarSpringBootServer/v2/Background/getEquipInfos',
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

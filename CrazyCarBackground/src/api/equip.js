import request from '@/utils/request'

export function getEqiupInfos(query) {
  return request({
    url: '/CrazyCarSpringBootServer/v2/Background/getEqiupInfos',
    method: 'get',
    params: query
  })
}

export function updtaeEquipInfo(data) {
  return request({
    url: '/CrazyCarSpringBootServer/v2/Background/updtaeEquipInfo',
    method: 'post',
    data
  })
}

import request from '@/utils/request'

export function getTimeTrialInfos(query) {
  return request({
    url: '/CrazyCarSpringBootServer/v2/Background/getTimeTrialInfos',
    method: 'get',
    params: query
  })
}

export function updtaeTimeTrialInfo(data) {
  return request({
    url: '/CrazyCarSpringBootServer/v2/Background/updtaeTimeTrialInfo',
    method: 'post',
    data
  })
}

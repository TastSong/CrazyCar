import request from '@/utils/request'

export function getAvatarInfos(query) {
  return request({
    url: '/CrazyCarSpringBootServer/v2/Background/getAvatarInfos',
    method: 'get',
    params: query
  })
}

export function updateAvatarInfo(data) {
  return request({
    url: '/CrazyCarSpringBootServer/v2/Background/updateAvatarInfo',
    method: 'post',
    data
  })
}

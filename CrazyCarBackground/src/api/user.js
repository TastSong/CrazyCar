import request from '@/utils/request'

export function login(data) {
  return request({
    url: '/CrazyCarSpringBootServer/v1/Background/login',
    method: 'post',
    data
  })
}

export function getInfo(token) {
  return request({
    url: '/CrazyCarSpringBootServer/v2/Background/userInfo',
    method: 'get',
    params: { token }
  })
}

export function logout() {
  return request({
    url: '/CrazyCarSpringBootServer/v2/Background/logout',
    method: 'post'
  })
}

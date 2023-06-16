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

export function getUserByUserName(query) {
  return request({
    url: '/CrazyCarSpringBootServer/v2/Background/getUserByUserName',
    method: 'get',
    params: query
  })
}

export function updateUser(data) {
  return request({
    url: '/CrazyCarSpringBootServer/v2/Background/updateUser',
    method: 'post',
    data
  })
}

export function getNav() {
  return request({
    url: '/CrazyCarSpringBootServer/v2/Background/getNav',
    method: 'get'
  })
}

export function getAllRoutes() {
  return request({
    url: '/CrazyCarSpringBootServer/v2/Background/getAllRoutes',
    method: 'get'
  })
}

export function getRoutes() {
  return request({
    url: '/CrazyCarSpringBootServer/v2/Background/getRoutes',
    method: 'get'
  })
}

export function getRoles() {
  return request({
    url: '/CrazyCarSpringBootServer/v2/Background/getRoles',
    method: 'get'
  })
}

export function createRole(data) {
  return request({
    url: '/CrazyCarSpringBootServer/v2/Background/createRole',
    method: 'post',
    data
  })
}

export function updateRole(data) {
  return request({
    url: '/CrazyCarSpringBootServer/v2/Background/updateRole',
    method: 'post',
    data
  })
}

export function deleteRole(data) {
  return request({
    url: '/CrazyCarSpringBootServer/v2/Background/deleteRole',
    method: 'post',
    data: data
  })
}

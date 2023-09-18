const asyncRoutes = [
  {
    redirect: '/form/index',
    level: 0,
    parentId: 0,
    path: '/form',
    component: 'Layout',
    createTime: '2020-02-07T08:29:13.000+00:00',
    children: [
      {
        path: 'form',
        component: 'form/index',
        meta: {
          icon: 'form',
          title: 'Form'
        },
        name: 'form'
      }
    ],
    meta: {
      icon: 'form',
      title: 'Form'
    },
    id: 68
  },
  {
    redirect: '/permission/role',
    path: '/permission',
    component: 'Layout',
    children: [
      {
        path: 'role',
        component: 'permission/role',
        meta: {
          title: 'Role Permission'
        },
        name: 'RolePermission'
      }
    ],
    meta: {
      icon: 'lock',
      title: 'Permission'
    },
    alwaysShow: true
  }
]

export default asyncRoutes

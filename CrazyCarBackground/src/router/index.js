import Vue from 'vue'
import Router from 'vue-router'

Vue.use(Router)

/* Layout */
import Layout from '@/layout'

/**
 * Note: sub-menu only appear when route children.length >= 1
 * Detail see: https://panjiachen.github.io/vue-element-admin-site/guide/essentials/router-and-nav.html
 *
 * hidden: true                   if set true, item will not show in the sidebar(default is false)
 * alwaysShow: true               if set true, will always show the root menu
 *                                if not set alwaysShow, when item has more than one children route,
 *                                it will becomes nested mode, otherwise not show the root menu
 * redirect: noRedirect           if set noRedirect will no redirect in the breadcrumb
 * name:'router-name'             the name is used by <keep-alive> (must set!!!)
 * meta : {
    roles: ['admin','editor']    control the page roles (you can set multiple roles)
    title: 'title'               the name show in sidebar and breadcrumb (recommend set)
    icon: 'svg-name'/'el-icon-x' the icon show in the sidebar
    breadcrumb: false            if set false, the item will hidden in breadcrumb(default is true)
    activeMenu: '/example/list'  if set path, the sidebar will highlight the path you set
  }
 */

/**
 * constantRoutes
 * a base page that does not have permission requirements
 * all roles can be accessed
 */
export const constantRoutes = [
  {
    path: '/login',
    component: () => import('@/views/login/index'),
    hidden: true
  },

  {
    path: '/404',
    component: () => import('@/views/404'),
    hidden: true
  },

  {
    path: '/',
    component: Layout,
    redirect: '/dashboard',
    children: [{
      path: 'dashboard',
      name: 'Dashboard',
      component: () => import('@/views/dashboard/index'),
      meta: { title: 'Dashboard', icon: 'dashboard' }
    }]
  },

  {
    path: '/user',
    component: Layout,
    children: [
      {
        path: 'index',
        name: 'User',
        component: () => import('@/views/user/index'),
        meta: { title: 'User', icon: 'user-icon' }
      }
    ]
  },

  {
    path: '/version',
    component: Layout,
    children: [
      {
        path: 'index',
        name: 'Version',
        component: () => import('@/views/version/index'),
        meta: { title: 'Version', icon: 'version' }
      }
    ]
  },

  {
    path: '/assets',
    component: Layout,
    children: [
      {
        path: 'index',
        name: 'Assets',
        component: () => import('@/views/assets/index'),
        meta: { title: 'Assets', icon: 'assets' }
      }
    ]
  },

  {
    path: '/avatar',
    component: Layout,
    children: [
      {
        path: 'index',
        name: 'Avatar',
        component: () => import('@/views/avatar/index'),
        meta: { title: 'Avatar', icon: 'avatar0' }
      }
    ]
  },

  {
    path: '/equip',
    component: Layout,
    children: [
      {
        path: 'index',
        name: 'Equip',
        component: () => import('@/views/equip/index'),
        meta: { title: 'Equip', icon: 'equipment' }
      }
    ]
  },

  {
    path: '/trial',
    component: Layout,
    children: [
      {
        path: 'index',
        name: 'Trial',
        component: () => import('@/views/trial/index'),
        meta: { title: 'Trial', icon: 'trial' }
      }
    ]
  },

  {
    path: '/match',
    component: Layout,
    children: [
      {
        path: 'index',
        name: 'Match',
        component: () => import('@/views/match/index'),
        meta: { title: 'Match', icon: 'match' }
      }
    ]
  },

  {
    path: '/form',
    component: Layout,
    hidden: true,
    children: [
      {
        path: 'index',
        name: 'Form',
        component: () => import('@/views/form/index'),
        meta: { title: 'Form', icon: 'form' }
      }
    ]
  },

  {
    path: 'external-link',
    component: Layout,
    children: [
      {
        path: 'https://github.com/TastSong/CrazyCar',
        meta: { title: 'External Link', icon: 'link' }
      }
    ]
  },

  // 404 page must be placed at the end !!!
  { path: '*', redirect: '/404', hidden: true }
]

const createRouter = () => new Router({
  // mode: 'history', // require service support
  scrollBehavior: () => ({ y: 0 }),
  routes: constantRoutes
})

const router = createRouter()

// Detail see: https://github.com/vuejs/vue-router/issues/1234#issuecomment-357941465
export function resetRouter() {
  const newRouter = createRouter()
  router.matcher = newRouter.matcher // reset router
}

export default router

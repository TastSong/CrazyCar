import router from './router'
import store from './store'
import { Message } from 'element-ui'
import NProgress from 'nprogress' // progress bar
import 'nprogress/nprogress.css' // progress bar style
import { getToken } from '@/utils/auth' // get token from cookie
import getPageTitle from '@/utils/get-page-title'
import Layout from '@/layout'

NProgress.configure({ showSpinner: false }) // NProgress Configuration

const whiteList = ['/login'] // no redirect whitelist

router.beforeEach(async(to, from, next) => {
  // start progress bar
  NProgress.start()

  // set page title
  document.title = getPageTitle(to.meta.title)

  // determine whether the user has logged in
  const hasToken = getToken()

  if (hasToken) {
    if (to.path === '/login') {
      // if is logged in, redirect to the home page
      next({ path: '/' })
      NProgress.done()
    } else {
      const hasGetUserInfo = store.getters.name
      if (hasGetUserInfo) {
        next()
      } else {
        try {
          // get user info
          await store.dispatch('user/getInfo')

          await store.dispatch('user/getRoutes')
          if (store.getters.menus.length < 1) {
            global.antRouter = []
            next()
          }
          const menus = filterAsyncRouter(store.getters.menus)
          console.log('   ===' + JSON.stringify(menus))
          router.push({ path: '*', redirect: '/404', hidden: true })
          router.addRoutes(menus)
          global.antRouter = menus
          next({ ...to, replace: true })
        } catch (error) {
          // remove token and go to login page to re-login
          await store.dispatch('user/resetToken')
          Message.error(error || 'Has Error')
          next(`/login?redirect=${to.path}`)
          NProgress.done()
        }
      }
    }
  } else {
    /* has no token*/

    if (whiteList.indexOf(to.path) !== -1) {
      // in the free login whitelist, go directly
      next()
    } else {
      // other pages that do not have permission to access are redirected to the login page.
      next(`/login?redirect=${to.path}`)
      NProgress.done()
    }
  }
})

router.afterEach(() => {
  // finish progress bar
  NProgress.done()
})

export const loadView = (view) => {
  return (resolve) => require([`@/views/${view}.vue`], resolve)
}
function filterAsyncRouter(asyncRouterMap) {
  const accessedRoutes = asyncRouterMap.filter(router => {
    if (router.component === 'Layout') {
      router.component = Layout
    } else {
      try {
        router.component = loadView(router.component)
      } catch (error) {
        router.component = loadView('system/menu/index')
        Message.error('请查看控制台修改或者删除不存在的组件路径')
      }
    }

    if (router.children && router.children.length) {
      router.children = filterAsyncRouter(router.children)
    }
    return true
  })
  return accessedRoutes
}

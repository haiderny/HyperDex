srcdir = '.'
blddir = 'build'
VERSION = '0.0.1'

def set_options(opt):
  opt.tool_options('compiler_cxx')

def configure(conf):
  conf.check_tool('compiler_cxx')
  conf.check_tool('node_addon')
  libpath=['/home/ashik/new/HyperDex/.libs']
  libhc = conf.check(lib='hyperclient', libpath=libpath, uselib_store='HC', mandatory=True)
  libhs = conf.check(lib='hyperspacehashing', libpath=libpath, uselib_store='HS', mandatory=True)

def build(bld):
#  bld.env.append_value('LINKFLAGS', '-lhyperclient -lhyperspacehashing'.split())
  obj = bld.new_task_gen('cxx', 'shlib', 'node_addon', uselib='HC HS'.split())
  obj.use = ['HC', 'HS']
  obj.cxx_flag = ['-ggdb', '-o0']
  obj.target = 'hyperclient'
  obj.source = ['hyperclient/nodejs/hyperclient.cc']
  obj.includes = ['/home/ashik/new/HyperDex/', '/home/ashik/new/HyperDex/hyperclient/nodejs']

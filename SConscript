import os
import platform

Import('env')

# Build environment configuration --------------------------------------------

# Apply CFLAGS, CXXFLAGS, LDFLAGS from the system environment.
flagnames = 'CFLAGS CXXFLAGS LDFLAGS'.split()
env.MergeFlags([os.environ.get(n, '') for n in flagnames])

# Insert LIBRARY_PATH explicitly because some compilers
# ignore it in the system environment.
env.PrependUnique(LIBPATH=env['ENV'].get('LIBRARY_PATH', '').split(':'))

# Use Intel C++ compiler if requested by the user.
icpc = None
if env['tool'] == 'intelc':
    icpc = env.WhereIs('icpc')
    if not icpc:
        print("Cannot find the Intel C/C++ compiler 'icpc'.")
        Exit(1)
    env.Tool('intelc', topdir=icpc[:icpc.rfind('/bin')])

fast_linkflags = ['-s']

# Platform specific intricacies.
if env['PLATFORM'] == 'darwin':
    env.Append(SHLINKFLAGS=['-install_name', '$TARGET.abspath'])
    env.AppendUnique(SHLINKFLAGS='-headerpad_max_install_names')
    fast_linkflags[:] = []

# Compiler specific options
if icpc:
    # options for Intel C++ compiler on hpc dev-intel07
    env.PrependUnique(CCFLAGS=['-w1', '-fp-model', 'precise'])
    env.PrependUnique(LIBS=['imf'])
    fast_optimflags = ['-fast', '-no-ipo']
else:
    # g++ options
    env.PrependUnique(CCFLAGS=['-Wall'])
    fast_optimflags = ['-ffast-math']

# Configure build variants
if env['build'] == 'debug':
    env.Append(CCFLAGS='-g')
elif env['build'] == 'fast':
    env.AppendUnique(CCFLAGS=['-O3'] + fast_optimflags)
    env.AppendUnique(CPPDEFINES={'NDEBUG' : None})
    env.AppendUnique(LINKFLAGS=fast_linkflags)

if env['profile']:
    env.AppendUnique(CCFLAGS='-pg')
    env.AppendUnique(LINKFLAGS='-pg')

# link warnings
env.AppendUnique(LINKFLAGS='-Wl,--no-undefined')
	
# REAL=double needed for pyobjcryst
env.AppendUnique(CCFLAGS='-DREAL=double')

# Additional library dependencies for ObjCryst
env.AppendUnique(LINKFLAGS='-lm')
env.AppendUnique(LINKFLAGS='-llapack')

# Lists for storing built objects and header files
env['newmatobjs'] = []
env['cctbxobjs'] = []
env['objcrystobjs'] = []
env['mstructobjs'] = []
env['lib_includes'] = []
env['libmstruct_includes'] = []

# Subsidiary SConscripts -----------------------------------------------------

# These will create the built objects and header file lists.
SConscript(["SConscript.cctbx", "SConscript.newmat", "SConscript.objcryst", "SConscript.mstruct"])

# Define sdist target for creating source distribution bundle
# Do so only if required to avoid extra git executions.
# Note: See .gitattributes for files excluded from sdist.
if 'sdist' in COMMAND_LINE_TARGETS:
    SConscript('SConscript.sdist')

# Top Level Targets ----------------------------------------------------------

# This retrieves the intermediate objects
newmatobjs = env["newmatobjs"]
cctbxobjs = env["cctbxobjs"]
objcrystobjs = env["objcrystobjs"]
mstructobjs = env["mstructobjs"]

# This builds the shared library
libobjcryst = env.SharedLibrary("libObjCryst",
        objcrystobjs + cctbxobjs + newmatobjs)
lib = Alias('lib', [libobjcryst, env['lib_includes']])
Default(lib)


def find_library(possible_library_names, conf):
    """
    Searches for library with possible different names under different versions.
    """
    proper_library_name = ''
    for name in possible_library_names:
        if conf.CheckLib(name):
            return name
    raise RuntimeError('Unable to find appropriate library name.', possible_library_names)

conf = Configure(env)
boost_python_libs = []
#There are many possible names of libraries due to different boost versions.
#TODO: recognise python version and apply correct version names.
boost_python_possible_names = ['boost_python27','boost_python']
boost_numpy_possible_names = ['boost_numpy27', 'boost_numpy']
boost_python_libs.extend((find_library(boost_python_possible_names, conf), find_library(boost_numpy_possible_names, conf)))
# This builds the shared MStruct library
MStructlibs = ['fftw3', 'gsl', 'ObjCryst', 'python2.7']+boost_python_libs
MStructlibpaths = ['/usr/lib', env.Dir('../../../libobjcryst/build/%s-%s' % (env['build'], platform.machine()))]
libmstruct = env.SharedLibrary("libMStruct", mstructobjs, LIBS=MStructlibs, LIBPATH=MStructlibpaths)
libms = Alias('libmstruct', [libmstruct, env['libmstruct_includes']])
	
# Installation targets.

prefix = env['prefix']

# install-lib
libinstall = env.Install(env['libdir'], libobjcryst)
if env['PLATFORM'] == 'darwin':
    # DARWIN_INSTALL_NAME can be pre-set in sconscript.local
    env.SetDefault(DARWIN_INSTALL_NAME='$TARGET.abspath')
    env.AddPostAction(libinstall,
            'install_name_tool -id $DARWIN_INSTALL_NAME $TARGET')
if env['PLATFORM'] == 'posix' and WhereIs('ldconfig'):
    opts = ''
    if os.getuid() != 0:  opts = '-n'
    env.AddPostAction(libinstall,
            'ldconfig %s $TARGET.dir' % opts)
Alias('install-lib', libinstall)

# install-includes
ninc = len(Dir('.').path) + 1
inc_target_path = lambda f: os.path.join(env['includedir'], f.path[ninc:])
include_targets = [inc_target_path(f) for f in env['lib_includes']]
Alias('install-include', InstallAs(include_targets, env['lib_includes']))

# install
Alias('install', ['install-lib', 'install-include'])

# vim: ft=python

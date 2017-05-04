EXTRA_DIST = GameWorld.h GameAssetManager.h GameAsset.h CubeAsset.h SFBoundingBox.h SFMath.h

bin_PROGRAMS = shaderexample
shaderexample_SOURCES = main.cc
shaderexample_LDADD = libhydra.la


lib_LTLIBRARIES = libpyhydra.la
libpyhydra_la_SOURCES = pythonCubeAsset.cc
libpyhydra_la_LDFLAGS = -version-info 0:1
libpyhydra_la_LIBADD = libhydra.la -lboost_python -lpython3.5.1
libpyhydra_la_CPPFLAGS = -I/usr/include/python3.5.1

lib_LTLIBRARIES += libhydra.la
libhydra_la_SOURCES = GameWorld.cc GameAssetManager.cc CubeAsset.cc Camera.cc BoundingBox.cc
libhydra_la_LDFLAGS = -version-info 0:1


AM_CPPFLAGS = -DGL_GLEXT_PROTOTYPES -DGL3_PROTOTYPES
AM_CPPFLAGS += -std=c++11
AM_CPPFLAGS += $(gl_CFLAGS) $(glew_CFLAGS) $(sdl2_CFLAGS) $(BOOST_CPPFLAGS)
LIBS += $(gl_LIBS) $(glew_LIBS) $(sdl2_LIBS) $(BOOST_THREAD_LIBS) $(BOOST_PROGRAM_OPTIONS_LIBS)

TESTS = TestApp
check_PROGRAMS = $(TESTS)
TestApp_SOURCES = hello.cpp
TestApp_LDADD = $(BOOST_UNIT_TEST_FRAMEWORK_LIBS)



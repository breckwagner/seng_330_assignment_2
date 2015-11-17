

# set(PROJECT_SOURCE_DIR "src")
# set(PROJECT_BINARY_DIR "src")

set(CMAKE_CXX_FLAGS "-std=c++11 -stdlib=libc++")

cmake_minimum_required (VERSION 2.8)
project (Assignment2)

find_package(Boost COMPONENTS date_time log thread system)
find_package(Protobuf REQUIRED)

# The version number.
set (Assignment2_VERSION_MAJOR 1)
set (Assignment2_VERSION_MINOR 0)

# configure a header file to pass some of the CMake settings
# to the source code
configure_file (
	"${PROJECT_SOURCE_DIR}/Config.h.in"
	"${PROJECT_BINARY_DIR}/Config.h"
	)

# add the binary tree to the search path for include files
# so that we will find Assignment2Config.h
include_directories("${PROJECT_BINARY_DIR}")

# add the executable
add_executable(run interface.cxx)


add_executable(unit unittest.cxx)
#target_link_libraries(unit gtest gtest_main)
#add_test(unit runUnitTests)



# $ protoc --proto_path=./ --cpp_out=build/ tutorial.proto

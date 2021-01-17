cmake_minimum_required(VERSION 3.19.3)

project(proj2cmake)

set(BOOST_ROOT "D:\\a\\proj2cmake\\proj2cmake\\boost\\boost-1.73.0-win32-msvc14.1-x86_64")

if ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "Clang" OR CMAKE_COMPILER_IS_GNUCXX)
   ADD_DEFINITIONS(-std=c++11)
   ADD_DEFINITIONS(-Wall)
endif()

FIND_PACKAGE (Boost 1.73.0)

if (Boost_FOUND)
  include_directories(
    ${Boost_INCLUDE_DIRS}
    )
endif()

AUX_SOURCE_DIRECTORY(src/ vcparser_SRC)
AUX_SOURCE_DIRECTORY(src/vcx vcparser_SRC)
AUX_SOURCE_DIRECTORY(src/cmake vcparser_SRC)

ADD_EXECUTABLE(proj2cmake
               ${vcparser_SRC})

TARGET_LINK_LIBRARIES(proj2cmake
                      ${Boost_SYSTEM_LIBRARY}
                      ${Boost_FILESYSTEM_LIBRARY}
                     )

cmake_minimum_required(VERSION 3.10)


# set the project name
project(Tutorial)


set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)


set(Boost_USE_STATIC_LIBS OFF) 
set(Boost_USE_MULTITHREADED ON)  
set(Boost_USE_STATIC_RUNTIME OFF) 
find_package(Boost 1.72.0) 

add_executable(Tutorial tutorial.cpp)


if(Boost_FOUND)
    include_directories(${Boost_INCLUDE_DIRS}) 
    target_link_libraries(Tutorial ${Boost_LIBRARIES})
endif()

set(DOPENSSL_ROOT_DIR "/usr/local/Cellar/openssl/1.0.2r")
set(DOPENSSL_LIBRARIES "/usr/local/Cellar/openssl")
find_package(OpenSSL REQUIRED)
message(WARNING "OpenSSL_VERSION: ${OPENSSL_VERSION}")
message(WARNING "OpenSSL_INCLUDE_DIR: ${OPENSSL_INCLUDE_DIR}")
message(WARNING "OpenSSL_LIBRARIES: ${OPENSSL_LIBRARIES}")
include_directories(${OpenSSL_INCLUDE_DIR})
target_link_libraries(Tutorial ${OpenSSL_LIBRARIES})


# add the executable

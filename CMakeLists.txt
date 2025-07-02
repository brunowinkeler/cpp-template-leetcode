cmake_minimum_required(VERSION 3.10)

set(PROJECT_NAME CppTemplate)
set(PROJECT_VERSION 1.0)
set(PROJECT_LANGUAGES CXX)

project(
    ${PROJECT_NAME}
    VERSION ${PROJECT_VERSION}
    LANGUAGES ${PROJECT_LANGUAGES}
)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON) 
set(CMAKE_BUILD_TYPE Debug)

file(GLOB SRC_FILES "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp")

foreach(SRC_FILE ${SRC_FILES})
    get_filename_component(EXEC_NAME ${SRC_FILE} NAME_WE)
    add_executable(${EXEC_NAME} ${SRC_FILE})
endforeach()
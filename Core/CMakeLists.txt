cmake_minimum_required(VERSION 3.23.5)
set(CORE_PROJECT_NAME Core)

set(ENGINE_PUBLIC_INCLUDES 
includes/EngineCore/application.hpp
)
set(ENGINE_PRIVATE_SOURCES 
src/EngineCore/application.cpp
)

add_library(${CORE_PROJECT_NAME} STATIC 
${ENGINE_PUBLIC_INCLUDES}
${ENGINE_PRIVATE_SOURCES}
)

target_include_directories(${CORE_PROJECT_NAME} PUBLIC includes)
target_compile_features(${CORE_PROJECT_NAME} PUBLIC cxx_std_17)
add_subdirectory(../lib/glfw ${CMAKE_CURRENT_BINARY_DIR}/glfw)
target_link_libraries(${CORE_PROJECT_NAME} PRIVATE glfw)

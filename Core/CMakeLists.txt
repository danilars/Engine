cmake_minimum_required(VERSION 3.23.5)
set(CORE_PROJECT_NAME Core)
add_library(${CORE_PROJECT_NAME} STATIC 
	src/EngineCore/Utils/test.cpp
	includes/EngineCore/Utils/test.hpp)
target_include_directories(${CORE_PROJECT_NAME} PUBLIC includes)
target_compile_features(${CORE_PROJECT_NAME} PUBLIC cxx_std_17)

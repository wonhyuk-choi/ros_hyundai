# Cmake version requirement
cmake_minimum_required (VERSION 2.6)

# Project information
Project (Cmake_LibEx)

# reference directory
add_subdirectory(MyMathLib)
add_executable(Cmake_LibEx src/main.cpp)

# linking library
target_link_libraries(Cmake_LibEx PUBLIC MyMath)

# include
target_include_directories(Cmake_LibEx PUBLIC
											"${PROJECT_BINARY_DIR}"
											"${PROJECT_SOURCE_DIR}/MyMathLib")
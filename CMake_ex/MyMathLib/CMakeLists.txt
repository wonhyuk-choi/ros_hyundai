# /MyMathLib/CMakeLists.txt

# static library
add_library(MyMath mysqrt.cpp mysquare.cpp)

# compile option
target_compile_options(MyMath PRIVATE -Wall -Werror)
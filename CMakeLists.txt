
cmake_minimum_required(VERSION 3.29)
project(cpp_youtube_tuttorial)
set(CMAKE_CXX_STANDARD 20)


add_executable(cpp_youtube_tuttorial basic_cpp_lessons/main.cpp
        basic_cpp_lessons/writeReadFile.cpp
        basic_cpp_lessons/console.cpp
        basic_cpp_lessons/stdFunctions.cpp
        basic_cpp_lessons/cmath.cpp
        basic_cpp_lessons/loops.cpp
        basic_cpp_lessons/carrays.cpp
        basic_cpp_lessons/cpointer.cpp
        basic_cpp_lessons/cdynamicarray.cpp
        basic_cpp_lessons/cchar.cpp
        basic_cpp_lessons/cstring.cpp
        basic_cpp_lessons/test_headers_files/testheader.h
        basic_cpp_lessons/test_headers_files/testheader2.h
        basic_cpp_lessons/clambda.cpp
        basic_cpp_lessons/function_template.cpp
        basic_cpp_lessons/cconcepts.cpp
        basic_cpp_lessons/ptr_ref_in_func.cpp
        basic_cpp_lessons/custom_class/Product.h
        basic_cpp_lessons/custom_class/constants.h
        basic_cpp_lessons/custom_class/Product.cpp
        basic_cpp_lessons/inherit/inherit.cpp
        basic_cpp_lessons/inherit/product.h
        basic_cpp_lessons/inherit/friend_ex.cpp
        basic_cpp_lessons/inherit/cconstructor.cpp
        basic_cpp_lessons/inherit/destructor/Person.h
        basic_cpp_lessons/inherit/destructor/Person.cpp
        basic_cpp_lessons/inherit/destructor/destructor.cpp
        basic_cpp_lessons/polymorphism/polymorphism.cpp
        basic_cpp_lessons/polymorphism/destructor_polymorphism.cpp
        basic_cpp_lessons/abstract_func.cpp
        basic_cpp_lessons/c_interface.cpp
        structure_data/first_lesson.cpp
        structure_data/vector_ex.cpp
        structure_data/arrayex.cpp
        structure_data/deque_ex.cpp
        structure_data/forward_list_ex.cpp
        structure_data/list_ex.cpp
        structure_data/map_ex.cpp
        structure_data/queue_ex.cpp
        structure_data/set_ex.cpp
        structure_data/stack_ex.cpp
        structure_data/unordered_map.cpp
)

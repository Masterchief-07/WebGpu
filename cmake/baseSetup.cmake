macro(BaseSetup name)
    
project(${name} 
        VERSION 0.1 
        LANGUAGES CXX C)

add_executable(${name} main.cpp)
target_link_libraries(${name} dawn::webgpu_dawn)
target_compile_features(${name} INTERFACE cxx_std_${CMAKE_CXX_STANDARD})

endmacro()

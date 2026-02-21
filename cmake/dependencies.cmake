#setting dependencies up
include(${CMAKE_SOURCE_DIR}/cmake/CPM.cmake)

function(setDependencies)

if(NOT TARGET dawn::webgpu_dawn)
    CPMAddPackage(
        NAME Dawn
        URL https://github.com/google/dawn/archive/refs/tags/v20260219.200501.zip
        OPTIONS "DAWN_FETCH_DEPENDENCIES ON"
    )
endif()

    
endfunction()

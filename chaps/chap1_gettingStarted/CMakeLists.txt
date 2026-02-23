include(${CMAKE_SOURCE_DIR}/cmake/baseSetup.cmake)

BaseSetup(gettingStarted)

target_include_directories( 
    gettingStarted 
    PUBLIC 
    include
)

target_sources(
    gettingStarted
    PRIVATE
    src/Instance.cpp
    src/Adapter.cpp
)
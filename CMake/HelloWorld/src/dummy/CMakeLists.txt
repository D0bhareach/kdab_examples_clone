qt_add_library(dummy STATIC
    object.cpp
)
target_link_libraries(dummy PRIVATE Qt6::Core)
target_include_directories(dummy INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})
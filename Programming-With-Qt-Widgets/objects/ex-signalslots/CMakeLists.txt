cmake_minimum_required(VERSION 3.27.0)

project(ex-signalslots VERSION 0.1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 COMPONENTS Widgets REQUIRED )
qt_standard_project_setup()
add_subdirectory(src)

# set directory to executable
set_target_properties(ex-signalslots PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/bin
)
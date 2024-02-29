qt_add_executable(ex-signalslots
    myemitter.cpp
    myemitter.h
    myreceiver.cpp
    myreceiver.h
    main.cpp
)
target_link_libraries(ex-signalslots PRIVATE Qt6::Widgets)
set_target_properties(ex-signalslots PROPERTIES
    WIN32_EXECUTABLE ON
    MACOSX_BUNDLE ON
)
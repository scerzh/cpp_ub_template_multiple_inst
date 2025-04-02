cmake_minimum_required(VERSION 3.0)

project(test)

option(FORWARD_LINK_ORDER "The order of source files which affects the order of compiling and linking" On)

add_executable(test)

target_sources(test PRIVATE main.cpp)

if(FORWARD_LINK_ORDER)
    message("LINK ORDER: FORWARD")
    target_sources(test
        PRIVATE
            one.cpp
            two.cpp
        )
else()
    message("LINK ORDER: BACKWARD")
    target_sources(test
        PRIVATE
            two.cpp
            one.cpp
        )
endif()

set_property(TARGET test PROPERTY CXX_STANDARD 17)
set_property(TARGET test PROPERTY CXX_STANDARD_REQUIRED True)

install(TARGETS test RUNTIME DESTINATION bin)

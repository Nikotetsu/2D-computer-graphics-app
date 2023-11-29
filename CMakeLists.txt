cmake_minimum_required(VERSION 3.15)

#
#   Project details
#

project(
    "2D-cg-app"
    VERSION "0.0.1"
    LANGUAGES CXX
)

include(cmake/settings.cmake)
include(cmake/packages.cmake)
include(cmake/sources.cmake)

#
# Application
#

add_executable(2D-cg-app
    ${exe_sources}
)

target_link_libraries(2D-cg-app
    PRIVATE
    	sfml-audio
    	sfml-graphics
    	sfml-system
        sfml-window
)





cmake_minimum_required( VERSION 3.0 )

set( PROJECT_NAME tinbom )

project( ${PROJECT_NAME} )

add_definitions( -g -ggdb )

set( INCLUDE_PATHS ./inc )

set( MODULE_PATH ./src )
set( INCLUDE_PATHS ${INCLUDE_PATHS} ${MODULE_PATH} )
include_directories( ${INCLUDE_PATHS} )
add_subdirectory( ${MODULE_PATH} )

set( MODULE_PATH ./semples )
set( INCLUDE_PATHS ${INCLUDE_PATHS} ${MODULE_PATH} )
include_directories( ${INCLUDE_PATHS} )
add_subdirectory( ${MODULE_PATH} )



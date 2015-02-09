## Version: $Id$
##
######################################################################
##
### Commentary:
##
######################################################################
##
### Change Log:
##
######################################################################
##
### Code:

project(creationalPatternsTest)

## ###################################################################
## Build tree setup
## ###################################################################

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

## ###################################################################
## Input
## ###################################################################

set(${PROJECT_NAME}_HEADERS
    abstractFactoryTest.h)

set(${PROJECT_NAME}_SOURCES
    abstractFactoryTest.cpp)

## ###################################################################
## Build rules
## ###################################################################

add_executable(
    ${PROJECT_NAME}
    ${${PROJECT_NAME}_SOURCES_TST}
    ${${PROJECT_NAME}_SOURCES})

## ###################################################################
## Link rules
## ###################################################################

qt5_use_modules(${PROJECT_NAME} Core)
qt5_use_modules(${PROJECT_NAME} Test)

target_link_libraries(${PROJECT_NAME} cppPatterns)

## ###################################################################
## Test rules
## ###################################################################

add_test(abstractFactoryTest ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/${PROJECT_NAME} abstractFactoryTest)

######################################################################
### CMakeLists.txt ends here

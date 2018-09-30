project(${CMAKE_PROJECT_NAME}_lib)

set(HEADER_FILES
        hryvnia.h)
set(SOURCE_FILES
        hryvnia.cpp)

add_library(${CMAKE_PROJECT_NAME}_lib STATIC
        ${SOURCE_FILES}
        ${HEADER_FILES}
        )

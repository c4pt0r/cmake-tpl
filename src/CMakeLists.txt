include_directories(
    ${PROJECT_INCLUDE_DIRS}
    ${GRPC_INCLUDE_DIRS})

add_library(${PROJECT_LIBRARIES}
    # source files
    foo.cc
    # header files
    "${PROJECT_INCLUDE_DIRS}/api.h"
)

target_link_libraries(${PROJECT_LIBRARIES}
    ${GRPC_LIBRARIES})


set(pTSX_VERSION 0.0)

set(pTS_HDR
    pTSpace.h
    ${pTS_SUPPORT_HDR}
)

set(pTS_SRC
    pTSpace.cpp
    ${pTS_SUPPORT_SRC}
)

add_library(pTS STATIC pTSpace.cpp)

target_include_directories(pTS PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

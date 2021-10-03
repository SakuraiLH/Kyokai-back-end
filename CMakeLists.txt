cmake_minimum_required (VERSION 3.10)
set (CMAKE_CXX_STANDARD 17)
project (kyokai-back-end)
add_executable (kyokai-back-end src/main.cpp)
include_directories (include)
include(FetchContent)
FetchContent_Declare(cpr GIT_REPOSITORY https://github.com/libcpr/cpr.git GIT_TAG f4622efcb59d84071ae11404ae61bd821c1c344b) # the commit hash for 1.6.2
FetchContent_MakeAvailable(cpr)
target_link_libraries(kyokai-back-end PRIVATE cpr::cpr)


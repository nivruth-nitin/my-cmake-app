# Minimum CMake version required
cmake_minimum_required(VERSION 3.10)

# Project name and version
project(MyApp VERSION 1.0.0 LANGUAGES C)

# Set C standard
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

# Add compiler warnings
if(CMAKE_C_COMPILER_ID MATCHES "GNU|Clang")
    add_compile_options(-Wall -Wextra -Wpedantic)
elseif(MSVC)
    add_compile_options(/W4)
endif()

# Option to build in debug or release mode
if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Release)
endif()

message(STATUS "Build type: ${CMAKE_BUILD_TYPE}")

# Source files
set(SOURCES
    main.c
    math_utils.c
    string_utils.c
)

# Header files (for IDE organization)
set(HEADERS
    math_utils.h
    string_utils.h
)

# Create executable
add_executable(myapp ${SOURCES} ${HEADERS})

# Link math library (required on some platforms for math.h functions)
target_link_libraries(myapp PRIVATE m)

# Installation rules
install(TARGETS myapp DESTINATION bin)

# Print some useful information
message(STATUS "Project: ${PROJECT_NAME} ${PROJECT_VERSION}")
message(STATUS "C Compiler: ${CMAKE_C_COMPILER}")
message(STATUS "C Standard: ${CMAKE_C_STANDARD}")
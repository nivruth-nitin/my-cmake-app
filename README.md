# CMake C Application Example

A simple C application demonstrating CMake build configuration with multiple source files.

## Project Structure

```
.
├── CMakeLists.txt       # CMake build configuration
├── main.c               # Main application entry point
├── math_utils.h         # Math utilities header
├── math_utils.c         # Math utilities implementation
├── string_utils.h       # String utilities header
└── string_utils.c       # String utilities implementation
```

## Building the Project

### Linux/macOS

```bash
# Create build directory
mkdir build
cd build

# Configure with CMake
cmake ..

# Build the project
make

# Run the application
./myapp
```

### Windows (with Visual Studio)

```bash
# Create build directory
mkdir build
cd build

# Configure with CMake
cmake ..

# Build the project
cmake --build .

# Run the application
.\Debug\myapp.exe
```

## CMake Options

### Build Types

```bash
# Debug build (with debug symbols)
cmake -DCMAKE_BUILD_TYPE=Debug ..

# Release build (optimized)
cmake -DCMAKE_BUILD_TYPE=Release ..
```

### Specifying Compiler

```bash
# Use GCC
cmake -DCMAKE_C_COMPILER=gcc ..

# Use Clang
cmake -DCMAKE_C_COMPILER=clang ..
```

## Installation

```bash
# Install to system (may require sudo on Linux/macOS)
sudo make install

# Or specify custom installation prefix
cmake -DCMAKE_INSTALL_PREFIX=/usr/local ..
make
make install
```

## Cleaning Build

```bash
# Remove build directory
rm -rf build
```

## Key CMake Concepts Used

- **cmake_minimum_required**: Specifies minimum CMake version
- **project**: Defines project name and version
- **set**: Sets variables (like C standard)
- **add_executable**: Creates executable target from source files
- **target_link_libraries**: Links libraries to target
- **install**: Defines installation rules
- **add_compile_options**: Adds compiler flags

## Extending the Project

### Adding a Library

```cmake
# In CMakeLists.txt
add_library(mylib STATIC math_utils.c string_utils.c)
target_link_libraries(myapp PRIVATE mylib)
```

### Adding Subdirectories

```cmake
# For larger projects
add_subdirectory(src)
add_subdirectory(lib)
```

### Finding External Libraries

```cmake
# Example: finding and linking pthread
find_package(Threads REQUIRED)
target_link_libraries(myapp PRIVATE Threads::Threads)
```

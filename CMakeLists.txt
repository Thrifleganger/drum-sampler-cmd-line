cmake_minimum_required (VERSION 3.8)

set(CMAKE_CXX_STANDARD 17)
set(ProjectName DrumSampler)

# Setting this will move the Cmake predefined targets such as ALL_BUILD and ZERO_CHECK into it's own directory
# This avoids unnecessary noise in the solution view
set_property(GLOBAL PROPERTY USE_FOLDERS ON)

# These are variables declared within libsndfile, and we are setting all of these to false, since we just need the 
# static lib build, and we don't care about examples, extra programs, or tests
set(BUILD_PROGRAMS OFF)
set(BUILD_EXAMPLES OFF)
set(BUILD_TESTING OFF)

# Create our project with a name that comes from the ProjectName variable
project(${ProjectName})

# Add libsndfile library and add it's include directory
add_subdirectory(lib/libsndfile)
include_directories(lib/libsndfile/include)

# Add rtaudio library and add it's include directory
add_subdirectory(lib/rtaudio)
include_directories(lib/rtaudio)

# Create an executable file and references the sources and header files that we write
add_executable(${ProjectName} source/Main.cpp source/SampleFile.h)

# Link the newly build static libraries of libsndfile and rtaudio into the executable
target_link_libraries(${ProjectName} sndfile)
target_link_libraries(${ProjectName} rtaudio)
# Command Line Drum Sampler 

### Requirements
- C++ 17
- [CMake](https://cmake.org/download/)
- IDE of your choice (VS2019, XCode)

Uses libraries `libsndfile` for interacting with audio files, and `rtaudio` for real time audio playback

### Building the application

1. Clone the project. Use recursive flag to pull down the libraries required.
```
git clone --recursive git@github.com:Thrifleganger/drum-sampler-cmd-line.git
```
If you face problems with cloning and it states that it can't find any SSH keys, then I strongly recommend the modern way of [Connecting to GitHub with SSH](https://docs.github.com/en/github/authenticating-to-github/connecting-to-github-with-ssh)
2. Create a new folder to hold all the build files that cmake will generate
```
mkdir build
```
3. Navigate to the `build` folder
```
cd build
```
4. Run the cmake command with a generator (-G) of your choice. Usually, the `-G xxx` option is not required. On Mac: 
```
cmake .. -G Xcode
```
or on Windows:
```
cmake .. -G "Visual Studio 16 2019"
```
5. Navigate the `build` folder and open the project file in your IDE. 
#pragma once

#include <sndfile.hh>

class SampleFile
{
public:
	SampleFile(const std::string& path) : fileHandle(path)
	{
		if (fileHandle.error())
		{
			std::cout << "Could not load file at " << path << std::endl;
			return;
		}
	}

	void printInfo() const
	{
		std::cout << "Format: " << fileHandle.format() << std::endl;
		std::cout << "Frames: " << fileHandle.frames() << std::endl;
		std::cout << "SampleRate: " << fileHandle.samplerate() << std::endl;
		std::cout << "Channels: " << fileHandle.channels() << std::endl;
		std::cout << "Duration (seconds): " << fileHandle.frames() / static_cast<float> (fileHandle.samplerate()) << std::endl;
	}

private:
	SndfileHandle fileHandle;
};
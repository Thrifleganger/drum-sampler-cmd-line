#pragma once

#include <RtAudio.h>

class SamplePlayer
{
public:
	SamplePlayer()
	{
		if (rtAudio.getDeviceCount() == 0)
		{
			std::cout << "Error: No devices found" << std::endl;
			exit(1);
		}
	}

	void printInfo()
	{
		std::cout << "Device Information: " << std::endl;	
		std::cout << "Device count: " << rtAudio.getDeviceCount() << std::endl;
		for (auto device = 0u; device < rtAudio.getDeviceCount(); ++device)
		{			
			auto deviceInfo = rtAudio.getDeviceInfo(device);
			std::cout
				<< deviceInfo.name
				<< "(" << deviceInfo.inputChannels << ", " << deviceInfo.outputChannels << ")"
				<< (deviceInfo.isDefaultInput ? " Default Input" : "")
				<< (deviceInfo.isDefaultOutput ? " Default Output" : "")
				<< std::endl;
		}
	}

private:
	RtAudio rtAudio;
};

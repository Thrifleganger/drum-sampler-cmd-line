#include <iostream>
#include "SampleFile.h"
#include "SamplePlayer.h"

int main()
{
	const SampleFile sampleFile("../samples/kick.wav");
	sampleFile.printInfo();

	SamplePlayer samplePlayer;
	samplePlayer.printInfo();

	getchar();
}

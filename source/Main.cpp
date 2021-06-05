#include <iostream>
#include "SampleFile.h"

int main()
{
	const SampleFile sampleFile("../samples/kick.wav");
	sampleFile.printInfo();

	getchar();
}
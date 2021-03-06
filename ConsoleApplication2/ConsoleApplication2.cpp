// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Dothinkey.h"
#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	char *input = new char[255];

	Dothinkey *dk = new Dothinkey();
	dk->DothinkeyEnum();
	dk->DothinkeyOpen();
	for (int i = 0; i < 2; i++) {
		dk->DothinkeyLoadIniFile(i);
		dk->DothinkeyStartCamera(i);
		dk->DothinkeyGrabImage(i);
	}
	printf("Waiting for user input.......\n");
	cin >> input;

	delete dk;
	delete [] input;

    return 0;
}


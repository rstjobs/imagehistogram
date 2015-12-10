// HistImg.cpp : Defines the entry point for the console application.

#include "stdio.h"
#include "inputimage.h" //input image

#define HISTLEVEL 256
#define IMAGESIZE WIDTH*HEIGHT

int main()
{
	//Image Histogram
	unsigned int histArray[HISTLEVEL] = { 0 }; 
	//Eq histogram
	unsigned int newHistArray[HISTLEVEL] = { 0 };
	//Out image arrat this can be written to other file and read back
	unsigned char outImg[IMAGESIZE] = { 0 };

	
	// Calculation of imae Histrogram 
	int cnt = 0;
	while (cnt <IMAGESIZE)
	{
		histArray[InImg[cnt]]++;
		cnt++;
	}


	//Equ histogram

	unsigned int n = 0; unsigned int sum = 0;
	while (n < HISTLEVEL)
	{
		//sum of i to n
		sum += histArray[n];

		//Kn formula
		newHistArray[n] = (unsigned char)(sum * (256.0 / (IMAGESIZE)));
		n++;
	}


	//out image this can be saved in to any file or can be read in on the fly
	
	int cnt2 = 0;
	while (cnt2 < (IMAGESIZE))
	{
		outImg[cnt2] = newHistArray[InImg[cnt2]];
		cnt2++;
	}


	return 0;
}

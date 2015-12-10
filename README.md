# imagehistogram
This is platform independent implementation of image histogram written in C, no library required

This folder contains 3 files

Image2HeaderWrite.c
This file takes a RGB Image and convert that image to 8 bit image and write data in to
an file inputimage.h, Note:- openCV required to build 

HistImg.c
This code is for Histogram Equalization, inputimage.h is required to give input image,
out image can be written in to other file or can pass to subsequent function

Note:- a inputimage.h provided for lena

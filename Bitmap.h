#pragma once
#include <string>
#include <cstdint>
#include <memory>
class Bitmap
{
public:
	Bitmap(int width, int height);
	bool Write(std::string fileName); // after creating bitmap we want to write it
	void SetPixel(int x, int y, uint8_t red, uint8_t green, uint8_t blue);



private:
	int mWidth{ 0 };
	int mHeight{ 0 };
	std::unique_ptr<std::uint8_t[]>  mptrPixels{ nullptr };//to allocate memory to store information of all our pixels
														//,and then we want set pixels in that memory -  SetPixel
														//and finally write it into file - Write

};


#pragma once
#include"nSided.h"
class Cube:public nSided
{
public:
	Cube();
	Cube(int sides, int length);
	int perimeter();
};


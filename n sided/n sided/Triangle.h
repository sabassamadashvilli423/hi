#pragma once
#include"nSided.h"
class Triangle:public nSided
{
public:
	Triangle();
	Triangle(int sides, int length);
	int perimeter();
};


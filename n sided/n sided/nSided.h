#pragma once
class nSided
{
public:
	int sides, length;
	nSided();
	nSided(int sides, int length);
	virtual int perimeter()=0;
};


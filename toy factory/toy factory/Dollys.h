#pragma once
#include"Toy.h"
class Dollys :public Toy
{
public:
    int print() {
        return price1 + price2 + eprice;
    }
};


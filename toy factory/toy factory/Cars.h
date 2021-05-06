#pragma once
#include"Toy.h"
class Cars:public Toy
{
public:
    int print() {
        return price1 + (4 * price2) + eprice;
    }
};


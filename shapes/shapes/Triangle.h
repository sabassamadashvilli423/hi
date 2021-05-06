#pragma once
#include"Shape.h"
class Triangle : public Shape {
public:
    int getPerimeter() {
        return y+z+x;
    }
};
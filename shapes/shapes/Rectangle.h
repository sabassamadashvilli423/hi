#pragma once
#include"Shape.h"
class Rectangle : public Shape{
   public:
      int getPerimeter() {
         return (x + y)*2;
      }
};

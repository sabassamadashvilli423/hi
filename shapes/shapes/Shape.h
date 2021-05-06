#pragma once
class Shape {
public:
    
    virtual int getPerimeter() = 0;
    void setx(int w) {
        x = w;
    }

    void sety(int h) {
        y = h;
    }
    void setz(int l) {
       z = l;
    }

protected:
    int x;
    int y;
    int z;
};

#pragma once
class Toy
{
public:
    
    virtual int print() = 0;
    void setPrice1(int p1) {
        price1 = p1;
    }

    void setPrice2(int p2) {
        price2 = p2;
    }
    void setEprice(int ep) {
        eprice = ep;
    }
protected:
    int price1;
    int price2;
    int eprice;
};



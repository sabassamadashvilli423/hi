#include <iostream>
#include"Toy.h"
#include"Cars.h"
#include"Dollys.h"
using namespace std;
int main()
{
    Cars c;
    Dollys  d;

    c.setPrice1(5);
    c.setPrice2(7);
    c.setEprice(2);

    
    cout << "Total Rectangle area: " << c.print() << endl;

    d.setPrice1(45);
    d.setPrice2(23);
    d.setEprice(12);

    
    cout << "Total Triangle area: " << d.print() << endl;
}
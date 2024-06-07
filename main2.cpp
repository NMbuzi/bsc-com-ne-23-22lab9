#include <iostream>
#include "rectangle.h"
#include "triangle.h"

using namespace std;

int main(){
    rectangle rect;
    triangle trgl;
    polygon*pPoly1=&rect;
    polygon*pPoly2 =&trgl;
    pPoly1->SetValue(4,5);
    pPoly2->SetValue(4,5);
    cout<<rect.Area()<<'\n';
    cout<<trgl.Area()<<'\n';

    return 0;
}
#include <iostream>
#include "Figura.h"
using namespace std;

class Triangulo : public Figura {
public:
void dibuja();
};

void Triangulo::dibuja() {
    cout<<"    *    "<<endl;
    cout<<"  *** "<<endl;
    cout<<"****"<<endl;
    cout<<"**** Coord("<<x<<","<<y<<")"<<endl;
}
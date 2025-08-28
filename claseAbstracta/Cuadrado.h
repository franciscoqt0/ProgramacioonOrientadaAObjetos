#include <iostream>
#include "Figura.h"

class Cuadrado : public Figura {
public:
void dibuja();
};
using namespace std;

void Cuadrado::dibuja() {
    cout<<"****"<<endl;
    cout<<"****"<<endl;
    cout<<"****"<<endl;
    cout<<"**** Coord("<<x<<","<<y<<")"<<endl;
}
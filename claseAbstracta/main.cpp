#include "Figura.h"
#include "Cuadrado.h"
#include "Triangulo.h"

int main(){
    Figura *arr[5];
    arr[0] = new Cuadrado();
    arr[1] = new Triangulo();
    arr[2] = new Cuadrado();
    arr[3] = new Triangulo();
    arr[4] = new Cuadrado();

    return 0;
}
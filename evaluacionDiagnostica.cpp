#include <iomanip>
#include <iostream>
using namespace std;

double fraccion(int a, int b) {
    if (b == 0) {
        throw invalid_argument("El denominador no puede ser cero.");
    }
    return a / b;
}

int main() {
    int tamano;

    cout << "Ingresa el numero el tamaño de las matrices a evaluar, tomando"
         << " en cuenta que es una matriz cuadrada: ";
    cin >> tamano;
    
    return 0;
}
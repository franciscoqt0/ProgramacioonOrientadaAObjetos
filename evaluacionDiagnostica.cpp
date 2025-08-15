#include <iomanip>
#include <iostream>
using namespace std;

class fraccion{
private:
    int a;
    int b;
public:
    // Constructor
    fraccion(int num, int den) {
        if (den == 0) {
            cout << "Error: Denominator cannot be zero." << endl;
            a = num;
            b = 1; // Default to var/1 if denominator is zero
        } else {
            a = num;
            b = den;
        }
    }

}
class matriz{
private: 
    int n;

public:
    // Constructor
    matriz(int n){
        int mat1[n][n];
        int mat2[n][n];
    }
    double addElementMat(double mat[][], int i, int j, double value) {
        mat[i][j] = value;
    }
}

int main() {
    int t;

    cout << "Ingresa el numero para el tamaño de las matrices a evaluar, tomando"
         << " en cuenta que es una matriz cuadrada: ";
    cin >> t;
    matriz m(t);
    
    
    return 0;
}
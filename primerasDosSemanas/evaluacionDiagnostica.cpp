#include <iomanip>
#include <iostream>
#include <vector>
#include <stdexcept>
#include <numeric>
using namespace std;

class fraccion{
private:
    int num;
    int den;

    // Método privado para simplificar
    void simplificar() {
        int mcd = gcd(num, den); // máximo común divisor
        num /= mcd;
        den /= mcd;
        if (den < 0) { // evitar denominadores negativos
            num = -num;
            den = -den;
        }
    }
public:
    // Constructor
    fraccion(int n, int d) : num(n), den(d) {
        if (den == 0) throw invalid_argument("El denominador no puede ser cero");
        simplificar();
    }


};

class calcular{
private:
    size_t n_;
    vector<vector<fraccion>> A_, B_;
public:
explicit
}

int main() {
    int t;
    int a, b;

    cout << "Ingresa el tamano para 2 matrices cuadradas: ";
    cin >> t;

    if (t <= 0) {
        cout << "El tamaño de la matriz debe ser un número positiv" << endl;
        cin >> t;
        return 1;
    }else if (a <= 0 || b <= 0) {
        cout << "El tamaño de la matriz debe ser menor o igual a 10" << endl;
        return 1;
    }
    vector<vector<fraccion>> mat1(t, vector<fraccion>(t, fraccion(0, 1)));
    vector<vector<fraccion>> mat2(t, vector<fraccion>(t, fraccion(0, 1)));

    for (int i = 0; i < t; i++) {
        for (int j = 0; j < t; j++) {
            cout << "Ingresa el numerador de la fila " << i + 1 << " y columna " << j + 1 << " de la primera matriz: ";
            int num1;
            cin >> num1;
            cout << "Ingresa el denominador de la fila " << i + 1 << " y columna " << j + 1 << " de la primera matriz: ";
            int den1;
            cin >> den1;
            fraccion f1(num1, den1);
            mat1[i][j] = f1;
        }
    }
    for (int i = 0; i <t; i++){
        for (int j = 0; j < t; j++) {
            cout << "Ingresa el numerador de la fila " << i + 1 << " y columna " << j + 1 << " de la segunda matriz: ";
            int num1;
            cin >> num1;
            cout << "Ingresa el denominador de la fila " << i + 1 << " y columna " << j + 1 << " de la segunda matriz: ";
            int den1;
            cin >> den1;
            fraccion f2(num1, den1);
            mat2[i][j] = f2;
        }
    }

}
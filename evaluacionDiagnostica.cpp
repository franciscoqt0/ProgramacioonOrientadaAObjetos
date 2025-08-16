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

int main() {
    int t;

    cout << "Ingresa el tamaño de las 2 matrices cuadradas: ";
    cin >> t;
    vector<vector<double>> mat1(t, vector<double>(t, 0.0));
    vector<vector<double>> mat2(t, vector<double>(t, 0.0));

    for (int i = 0; i < t; i++) {
        for (int j = 0; j < t; j++) {
            cout << "Ingresa el numerador de la fila " << i + 1 << " y columna " << j + 1 << " de la primera matriz: ";
            int num1;
            cin >> num1;
            cout << "Ingresa el denominador de la fila " << i + 1 << " y columna " << j + 1 << " de la primera matriz: ";
            int den1;
            cin >> den1;
            fraccion f1(num1, den1);
            mat1[i][j] = // Asumiendo que hay un método getValue() para obtener el valor de la fracción
        }
    }
    return 0;
}
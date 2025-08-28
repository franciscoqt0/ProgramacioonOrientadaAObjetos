#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int* p = &x; // p apunta a x

    cout << "Valor de x: " << x << endl;      // 10
    cout << "Direccion de x (&x): " << &x << endl; // algo como 0x7ffee7f2c9ac
    cout << "Valor de p: " << p << endl;      // misma dirección
    cout << "Valor al que apunta (*p): " << *p << endl; // 10

    *p = 20;  // modificamos x a través del puntero
    cout << "Nuevo valor de x: " << x << endl; // 20
}
#include <iostream>
#include <iomanip>
using namespace std;

bool evaluar(bool p, bool q) {
    return (p || q) && (p || !q);
}

int main() {
    cout << boolalpha << left;

    // Encabezado
    cout << setw(7) << "p" << " | "
         << setw(7) << "q" << " | "
         << setw(10) << "Resultado" << "\n";
    cout << string(7, '-') << "-+-"
         << string(7, '-') << "-+-"
         << string(10, '-') << "\n";

    for (int i = 0; i <= 1; i++) {
        for (int j = 0; j <= 1; j++) {
            bool p = i, q = j;
            cout << setw(7) << p << " | "
                 << setw(7) << q << " | "
                 << setw(10) << (evaluar(p, q) ? "Verdadero" : "Falso")
                 << '\n';
        }
    }
    return 0;
}
#include <iostream>
using namespace std;

void evaluar(bool p, bool q) {
    if ((p || q) && (p || !q)) {
        cout << "Verdadero\n";
    } else {
        cout << "Falso\n";
    }
}

int main() {
    for(int i = 0; i <= 1; i++){
        for(int j = 0; j <= 1; j++){
            bool p = i; // 0 -> false, 1 -> true
            bool q = j;
            cout << "p = " << p << ", q = " << q << " => ";
            evaluar(p, q);
        } 
    }
    return 0;
}
#include <iostream>
using namespace std;
int main() {
    bool p = false;
    bool q = false;

    if ((p || q) && (p || !q)) {
        cout << "Verdadero\n";
    } else {
        cout << "Falso\n";
    }

}
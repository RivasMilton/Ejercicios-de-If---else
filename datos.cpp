#include <iostream>
using namespace std;

int main() {
    string c1, c2;

    cout << "Escribe la contrasena: ";
    cin >> c1;

    cout << "Confirma la contrasena: ";
    cin >> c2;

    if (c1 == c2) {
        cout << "Las contraseñas coinciden" << endl;
    }

    if (c1 != c2) {
        cout << "Las contrasenas no coinciden. Intenta de nuevo." << endl;
    }

    return 0;
}

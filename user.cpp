#include <iostream>
using namespace std;

int main() {
    string usuario1 = "admin";
    string contrasena1 = "1234";
    string usuario, contrasena;

    cout << "Usuario: ";
    cin >> usuario;
    cout << "Contrasena: ";
    cin >> contrasena;

    if (usuario == usuario1 && contrasena == contrasena1) {
        cout << "Autenticacion exitosa. Bienvenido, " << usuario << "!" << endl;
    } else {
        cout << "Credenciales incorrectas. Intento 1 de 3." << endl;

        cout << "Usuario: ";
        cin >> usuario;
        cout << "Contrasena: ";
        cin >> contrasena;

        if (usuario == usuario1 && contrasena == contrasena1) {
            cout << "Autenticacion exitosa. Bienvenido, " << usuario << "!" << endl;
        } else {
            cout << "Credenciales incorrectas. Intento 2 de 3." << endl;

            cout << "Usuario: ";
            cin >> usuario;
            cout << "Contrasena: ";
            cin >> contrasena;

            if (usuario == usuario1 && contrasena == contrasena1) {
                cout << "Autenticacion exitosa. Bienvenido, " << usuario << "!" << endl;
            } else {
                cout << "Credenciales incorrectas. Intento 3 de 3." << endl;
                cout << "Demasiados intentos fallidos. Acceso denegado." << endl;
            }
        }
    }

    return 0;
}

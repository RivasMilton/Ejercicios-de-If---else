#include <iostream>
using namespace std;
int main(void){
    int edad, infracciones, experiencia;
    
    cout <<"Ingrese su edad"<< endl;
    cin >> edad;
    
    cout <<"Ingrese su cantidad de infracciones" << endl;
    cin >> infracciones;
    
    cout <<"Ingrese sus años de experiencia manejando" << endl;
    cin >> experiencia;

 if (edad < 18) {
        cout << "No apto para conducir." << endl;
    } 
     else if (edad >= 20 && infracciones == 0 && experiencia >= 1)
    {
        cout << "Conductor principiante." << endl;
    } 
     else if (infracciones <= 2 && experiencia >= 3) 
    {
        cout << "Conductor profesional." << endl;
    } 
     else 
    {
        cout << "Conductor peligroso." << endl;
    }
    return 0;
}

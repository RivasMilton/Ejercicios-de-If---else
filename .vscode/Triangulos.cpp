#include <iostream>
using namespace std;
int main(void){
    
	int lado1, lado2, lado3;
    cout<<"Ingrese el valor de un lado del triangulo" <<endl;
    cin >>lado1;
    cout<<"Ingrese el valor de otro lado del triangulo" <<endl;
    cin >>lado2;
    cout<<"Ingrese el valor del tercer lado del triangulo" <<endl;
    cin >>lado3;

        if (lado1 == lado2 && lado2 == lado3) {
            cout << "El triangulo es equilátero." << endl;
        } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
            cout << "El triangulo es isósceles." << endl;
        } else {
            cout << "El triangulo es escaleno." << endl;
        }
	
	return 0;
}

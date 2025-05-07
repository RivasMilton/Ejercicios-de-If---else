#include <iostream>
using namespace std;

int main()
{
    int peso;
    cout <<"Ingrese el peso de su paquete" << endl;
    cin >> peso;

    if(peso <= 5 )
    {
        cout <<"Usted tendra que pagar 5 dolares por su paquete";
    }
    else if (peso >= 6 && peso <= 10 )
    {
        cout <<"Usted tendra que pagar 10 dolares por su paquete";
    }
    else
    {
         cout <<"Usted tendra que pagar 15 dolares por su paquete";
    }
    return 0;
}

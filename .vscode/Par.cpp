#include <iostream>
using namespace std;

int main()
{
    int n1 = 0;
    cout <<"ponga el numero que desee" << endl;
    cin >> n1;

    if(n1 % 2 == 0)
    {
        cout <<"su numero par es" << endl << n1; 
    }
    else 
    {
        cout <<"numero impar" << endl << n1;
    }

}

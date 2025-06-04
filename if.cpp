#include <iostream>
using namespace std;

int main()
{

    int tarifa;

    cout << "Ingrese su tarifa para clasificarlo o tarifa baja, media o alta";
    cin >> tarifa;

    if (tarifa < 100)
    {

        cout << "Su tarifa se clasifica como baja";
    }

    else if (tarifa <= 200)
    {

        cout << "su tarifa se clasifica como media";
    }

    else if (tarifa > 200)
    {

        cout << "Su tarifa se clasifica como alta";
    }

    return 0;
}

#include <iostream>
using namespace std;

int main()
{

    int mes;

    cout << "Ingrse su mes para decir cuantos dias tiene, en modalidad 1- Enero, 2- Febrero, etc" << endl;
    cin >> mes;

    switch (mes)
    {
    case 1:
        cout << "El mes de enero tiene 31 dias";
        break;

    case 2:
        cout << "El mes de febrero tiene 28 dias";
        break;

    case 3:
        cout << "El mes de marzo tiene 31 dias";
        break;

    case 4:
        cout << "El mes de abril tiene 30 dias";
        break;

    case 5:
        cout << "El mes de mayo tiene 31 dias";
        break;

    case 6:
        cout << "El mes de junio tiene 30 dias";
        break;

    case 7:
        cout << "El mes de julio tiene 31 dias";
        break;

    case 8:
        cout << "El mes de agosto tiene 31 dias";
        break;

    case 9:
        cout << "El mes de septiembre tiene 30 dias";
        break;

    case 10:
        cout << "El mes de octubre tiene 31 dias";
        break;

    case 11:
        cout << "El mes de noviembre tiene 30 dias";
        break;

    case 12:
        cout << "El mes de diciembre tiene 31 dias";
        break;

    default: cout << "Ingrese un mes valido";
        break;
    }

    return 0;
}

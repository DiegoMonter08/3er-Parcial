#include <iostream>
using namespace std;
int main() {
    int total = 0;
    for (int i = 0; i < 3; ++i) {
    int unidades, precio, subtotal;

    cout << "Ingrese la cantidad de unidades: ";
    cin >> unidades;
    cout << "Cantidad de unidades: " << unidades <<endl;

    cout << "Ingrese el precio: ";
    cin >> precio;
    cout << "Precio: " << precio <<endl;

    subtotal = unidades * precio;
    cout << "Subtotal: " << subtotal <<endl;

    total += subtotal;
    }
    cout<< "El total de los tres subtotales es: " <<total << endl;
    return 0;
}


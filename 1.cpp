#include <iostream>
using namespace std;
int main() {
    int unidades, precio, subtotal;

    cout << "Ingrese la cantidad de unidades: ";
    cin >> unidades;
    cout << "Cantidad de unidades: " << unidades << std::endl;

    cout << "Ingrese el precio: ";
    cin >> precio;
    cout << "Precio: " << precio << std::endl;

    subtotal = unidades * precio;
    cout << "Subtotal: " << subtotal << std::endl;

    return 0;
}


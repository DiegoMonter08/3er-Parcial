// Este codigo ha sido generado por el modulo psexport 20180802-w32 de PSeInt.
// Es posible que el codigo generado no sea completamente correcto. Si encuentra
// errores por favor reportelos en el foro (http://pseint.sourceforge.net).

#include<iostream>
using namespace std;

// En C++ no se puede dimensionar un arreglo est�tico con una dimensi�n no constante.
// PSeInt sobredimensionar� el arreglo utilizando un valor simb�lico ARREGLO_MAX.
// Ser�a posible crear un arreglo din�micamente con los operadores new y delete, pero
// este mecanismo a�n no est� soportado en las traducciones autom�ticas de PSeInt.
#define ARREGLO_MAX 100

// Para las variables que no se pudo determinar el tipo se utiliza la constante
// SIN_TIPO. El usuario debe reemplazar sus ocurrencias por el tipo adecuado
// (usualmente int,float,string o bool).
#define SIN_TIPO string

// Para leer variables de texto se utiliza el operador << del objeto cin, que
// lee solo una palabra. Para leer una linea completa (es decir, incluyendo los
// espacios en blanco) se debe utilzar getline (ej, reemplazar cin>>x por
// getline(cin,x)), pero obliga a agregar un cin.ignore() si antes del getline
// se ley� otra variable con >>.

int main() {
	int i;
	int n;
	SIN_TIPO num[ARREGLO_MAX];
	SIN_TIPO nume;
	cout << "digite el tama�o del arreglo" << endl;
	cin >> n;
	for (i=1;i<=n;i++) {
		cout << "digite un numero para la posicion " << 1 << endl;
		cin >> nume;
		num[i-1] = nume;
	}
	for (i=1;i<=n;i++) {
		cout << "El dato en la posicion " << i << " es: " << num[i-1] << endl;
	}
	return 0;
}


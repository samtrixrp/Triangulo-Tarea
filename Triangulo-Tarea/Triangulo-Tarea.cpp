#include <iostream>
#include "CTriangulo.h"

using namespace std;
int main()
{
	double n1, n2, n3;
	int opc;
	CTriangulo Figura;
	do {
		cout << "TRIANGULO" << endl;

		cout << "Ingresa el lado 1" << endl;
		cin >> n1;
		cout << "Ingresa el lado 2" << endl;
		cin >> n2;
		cout << "Ingrese el lado 3"<< endl;
		cin >> n3;
		Figura.asignarLado(n1, n2, n3);
		if (Figura.confirmarTriangulo() == 1 )
		{
			cout << "Es un triangulo " << endl;
		}
		else
		{
			cout << "No es un triangulo vuelva a intentar" << endl;
		}

	} while (Figura.confirmarTriangulo()!=1);
		cout << "Menu de operaciones" << endl<<"1-OBTENER AREA"<<endl<<"2-OBTENER PERIMETRO"<<endl<<"3-OBTENER SEMIPERIMETRO"<<endl;
		cin >> opc;
	switch (opc)
	{
	case 1: cout << "AREA DEL CIRCULO:" << endl;
		cout << Figura.Area();
		break;
	case 2: cout << "PERIMETRO DEL CIRCULO:" << endl;
		cout << Figura.Perimetro();
		break;
	case 3: cout << "SEMIPERIMETRO DEL CIRCULO:" << endl;
		cout << Figura.semiperimetro();
		break;
	}
	
}


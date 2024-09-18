#include <iostream>
#include <cstdlib>
#include "CTriangulo.h"

using namespace std;

void CTriangulo::asignarLado(double A,double B,double C)
{
	Lado1 = A;
	Lado2 = B;
	Lado3 = C;

}

bool CTriangulo::confirmarTriangulo()
{
	bool T;
	if (((Lado1 + Lado2) > Lado3) && ((Lado1 + Lado3) > Lado2 ) && ((Lado3 + Lado2) > Lado1))
	{
		T = 1;
	}
	else {
		
		T = 0;
	
	}
	return (T);
}

double CTriangulo::obtenerLado1()
{
	return (Lado1);
}

double CTriangulo::obtenerLado2()
{
	return (Lado2);
}

double CTriangulo::obtenerLado3()
{
	return Lado3;
}

double CTriangulo::semiperimetro()
{
	return ((Lado1+Lado2+Lado3)/2);
}

double CTriangulo::Perimetro()
{
	
		return ( Lado1 + Lado2 + Lado3); 
}

double CTriangulo::Area()
{
	double a ;
	a = (sqrt(abs(((4 * (Lado1 * Lado1)) * (Lado2 * Lado2) - ((Lado1 * Lado1) + (Lado2 * Lado2) - (Lado3 * Lado3)) * (4 * (Lado1 * Lado1)) * ((Lado2 * Lado2)) - ((Lado1 * Lado1) + (Lado2 * Lado2) - (Lado3 * Lado3))) / 4)));
	return (a);
	
}
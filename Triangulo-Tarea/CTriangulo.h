#pragma once

class CTriangulo
{
private:
	double Lado1, Lado3, Lado2;
public:
	void asignarLado(double Lado1, double Lado2,double  Lado3);
	double Area();
	double Perimetro();
	double semiperimetro();
	double obtenerLado1();
	double obtenerLado2();
	double obtenerLado3(); 
	bool confirmarTriangulo();

};

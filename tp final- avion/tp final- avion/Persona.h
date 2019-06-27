#pragma once
//CLASE PADRE
#include <string>
#include <iostream>
using namespace std;


class Persona
{
protected://para que se lo pase a los hijos
	const string Nombre, Apellido;
	
public:
	Persona(string nombre, string apellido);
	Persona();
	virtual ~Persona();
	virtual void Banio()=0;//este tambn se pasa a los hijos, pero como es un metodo no tiene que estar protegido #ABSTRACTA
	string getNombre() { return Nombre; }
	string getCodigo() { return Nombre; }
	string getApellido() { return Apellido; }
	
};


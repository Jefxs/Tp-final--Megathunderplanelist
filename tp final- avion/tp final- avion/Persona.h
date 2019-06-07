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
	~Persona();
	void Banio();//este tambn se pasa a los hijos, pero como es un metodo no tiene que estar protegido
	
};


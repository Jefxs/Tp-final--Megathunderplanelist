#pragma once
#include "Pasajero.h"
//CLASE HIJA DE PASAJERO
//NIETA DE PERSONA
class Ejecutivo:public Pasajero //HERENCIA
{

	
public:
	Ejecutivo(string nombre, string apellido, string codigo);
	~Ejecutivo();
	void UsarNotebook();
};


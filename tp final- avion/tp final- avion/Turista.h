#pragma once
#include "Pasajero.h"
//CLASE HIJA DE PASAJERO
//NIETA DE PERSONA
class Turista:public Pasajero //HERENCIA
{
public:
	Turista(string nombre, string apellido, string codigo);
	~Turista();
};


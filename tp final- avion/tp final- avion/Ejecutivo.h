#pragma once
#include "Pasajero.h"
//CLASE HIJA DE PASAJERO
//NIETA DE PERSONA
class Ejecutivo:public Pasajero //HERENCIA
{
	
public:
	Ejecutivo();
	~Ejecutivo();
	void UsarNotebook();
};


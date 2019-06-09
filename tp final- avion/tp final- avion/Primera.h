#pragma once
#include "Pasajero.h"
//HIJA DE PASAJERO
//NIETA DE PERSONA
class Azafate;
class Primera: public Pasajero //HERENCIA
{
public:
	Primera();
	~Primera();
	void Masajes(Azafate *azafate);
	void Champagne(Azafate *azafate);
	void UsarNotebook();
};


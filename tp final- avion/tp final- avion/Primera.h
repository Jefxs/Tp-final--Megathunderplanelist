#pragma once
#include "Pasajero.h"
//HIJA DE PASAJERO
//NIETA DE PERSONA
class Azafate;
class Primera: public Pasajero //HERENCIA
{
public:
	Primera(string nombre, string apellido, string codigo);
	~Primera();
	Evento *Masajes(Azafate *azafate);
	Evento *Champagne(Azafate *azafate);
	void UsarNotebook();
};


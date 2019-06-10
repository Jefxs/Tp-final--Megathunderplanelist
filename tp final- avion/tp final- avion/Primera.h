#pragma once
#include "Pasajero.h"
//HIJA DE PASAJERO
//NIETA DE PERSONA
class Azafate;
class Primera: public Pasajero //HERENCIA
{
public:
	Primera(string nombre, string apellido, string codigo, bool arrebato, bool descompuesto);
	~Primera();
	void Masajes(Azafate *azafate);
	void Champagne(Azafate *azafate);
	void UsarNotebook();
};


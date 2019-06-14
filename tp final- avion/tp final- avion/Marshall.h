#pragma once
#include "Pasajero.h"
//CLASE HIJA DE PASAJERO
//NIETA DE PERSONA
class Evento;
class Marshall:public Pasajero//HERENCIA
{
	
public:
	Marshall(string nombre, string apellido, string codigo);
	~Marshall();
	void ReducirPasajero(Pasajero *pasajero);

};


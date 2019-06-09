#pragma once
#include "Pasajero.h"
//CLASE HIJA DE PASAJERO
//NIETA DE PERSONA
class Evento;
class Marshall:public Pasajero//HERENCIA
{
	Evento *EventoM;
	
public:
	Marshall();
	~Marshall();
	void ReducirPasajero(Pasajero *pasajero);

};


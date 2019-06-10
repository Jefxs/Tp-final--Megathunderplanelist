#pragma once
#include "Pasajero.h"
//CLASE HIJA DE PASAJERO
//NIETA DE PERSONA
class Evento;
class Marshall:public Pasajero//HERENCIA
{
	Evento *EventoM;
	
public:
	Marshall(string nombre, string apellido, string codigo, bool arrebato, bool descompuesto);
	~Marshall();
	void ReducirPasajero(Pasajero *pasajero);

};


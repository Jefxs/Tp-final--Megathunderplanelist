#pragma once
#include "Persona.h"
//HIJA DE PERSONA
class Evento;

class Azafate : public Persona //HERENCIA 
{
	Evento *EventoA;

public:
	Azafate(string nombre, string apellido);
	~Azafate();
	void AtenderPasajero();
	void HacerAnuncio();
	void EntregarBebida();
	void EntregarComida();
	void EntregarChampagne();
	void HacerMasajes();

};


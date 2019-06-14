#pragma once
#include "Persona.h"
//HIJA DE PERSONA
class Evento;

class Azafate : public Persona //HERENCIA 
{


public:
	Azafate(string nombre, string apellido);
	~Azafate();
	void Banio();
	Evento *AtenderPasajero();
	Evento *HacerAnuncio();
	Evento *EntregarBebida();
	Evento *EntregarComida();
	Evento *EntregarChampagne();
	Evento *HacerMasajes();

};


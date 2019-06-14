#pragma once
#include "Persona.h"
class Evento;
class Azafate;
class Copiloto;
//HIJA DE PERSONA
class Piloto: public Persona//HERENCIA
{

	
public:
	Piloto(string nombre, string apellido);
	~Piloto();
	
	Evento Despegando();
	Evento Aterrizando();
	Evento PedirComida(Azafate *azafate);
	Evento PedirBebida(Azafate *azafate);
	Evento HacerAnuncio();
	Evento AsignarAnuncio(Azafate *azafate);
	void Banio();
	Evento VuelveBanio();
	
};


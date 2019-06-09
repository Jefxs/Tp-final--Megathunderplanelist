#pragma once
#include "Piloto.h"

//HIJA DE PILOTO
//NIETA DE PERSONA
class Evento;

class Copiloto:public Piloto //HERENCIA
{
	Evento *EventoCP;
	friend class Piloto;//piloto tiene acceso a modificar los atributos de copiloto

public:
	Copiloto(string nombre, string apellido) ;
	~Copiloto();
	void LLamarTorreControl();
};


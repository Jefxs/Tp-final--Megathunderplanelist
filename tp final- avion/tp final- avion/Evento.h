#pragma once
#include "Persona.h"
#include "MegaThunderPlaneList.h"
#include <string>
class Evento
{
	string evento;
	Persona *persona;
public:
	Evento(Persona *person, string event);
	~Evento();
	void PrintA();
	string getCodigo() { return evento; }


	
};


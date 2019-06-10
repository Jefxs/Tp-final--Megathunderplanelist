#pragma once
#include "Persona.h"
#include "MegaThunderPlaneList.h"
#include <string>
class Evento
{

	string evento;
	Persona *persona;
public:
	Evento(Persona *persona, string evento);
	~Evento();
	
};


#pragma once
#include "Piloto.h"

//HIJA DE PILOTO
//NIETA DE PERSONA
class Evento;

class Copiloto:public Piloto //HERENCIA
{

public:
	Copiloto(string nombre, string apellido) ;
	~Copiloto();
	Evento *LLamarTorreControl();
};


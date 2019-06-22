#include "Evento.h"



Evento::Evento(Persona *person, string event)
{
	persona = person;
	evento = event;

}

Evento::~Evento()
{
}

void Evento::PrintA()
{
	cout << evento;
}

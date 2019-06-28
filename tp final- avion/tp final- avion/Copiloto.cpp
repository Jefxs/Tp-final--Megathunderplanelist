#include "Copiloto.h"
#include "Evento.h"



Copiloto::Copiloto(string nombre, string apellido) : Piloto(nombre, apellido)//piloto y no persona xq el padre es piloto
{
}


Copiloto::~Copiloto()
{
}

Evento* Copiloto::LLamarTorreControl()
{
	cout<< Nombre << " " << Apellido << "llama a torre de control." << endl;
	Evento *eventito = new Evento(this, "Copiloto llama a torre de control.");
	return eventito;
}

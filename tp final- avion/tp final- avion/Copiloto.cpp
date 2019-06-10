#include "Copiloto.h"



Copiloto::Copiloto(string nombre, string apellido) : Piloto(nombre, apellido)//piloto y no persona xq el padre es piloto
{
}


Copiloto::~Copiloto()
{
}

void Copiloto::LLamarTorreControl()
{
	cout <<"Copiloto:"<< Nombre << " " << Apellido << "llama a torre de control." << endl;
}

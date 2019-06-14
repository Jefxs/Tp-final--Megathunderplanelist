#include "Primera.h"
#include "Azafate.h"
#include "Evento.h"

Primera::Primera(string nombre, string apellido, string codigo) : Pasajero(nombre, apellido, codigo)
{
}


Primera::~Primera()
{
}

Evento Primera::Masajes(Azafate *azafate)
{
	cout << Nombre << " " << Apellido << " pide masajes." << endl;
	Evento eventito= azafate->HacerMasajes();
	return  eventito;
}

Evento Primera::Champagne(Azafate *azafate)
{
	cout << Nombre << " " << Apellido << " pide champagne." << endl;
	return azafate->EntregarChampagne();
}

void Primera::UsarNotebook()
{
	cout << Nombre << " " << Apellido << " usa notebook." << endl;
}

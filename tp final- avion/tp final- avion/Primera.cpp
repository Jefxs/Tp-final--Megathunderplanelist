#include "Primera.h"
#include "Azafate.h"


Primera::Primera(string nombre, string apellido, string codigo, bool arrebato, bool descompuesto) : Pasajero(nombre, apellido, codigo, arrebato, descompuesto)
{
}


Primera::~Primera()
{
}

void Primera::Masajes(Azafate * azafate)
{
	cout << Nombre << " " << Apellido << " pide masajes." << endl;
	azafate->HacerMasajes();
}

void Primera::Champagne(Azafate * azafate)
{
	cout << Nombre << " " << Apellido << " pide champagne." << endl;
	azafate->EntregarChampagne();
}

void Primera::UsarNotebook()
{
	cout << Nombre << " " << Apellido << " usa notebook." << endl;
}

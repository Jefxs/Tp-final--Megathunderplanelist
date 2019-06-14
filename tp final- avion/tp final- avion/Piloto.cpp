#include "Piloto.h"
#include "Azafate.h"
#include "Copiloto.h"
#include "Evento.h"
#include "cLista.h"
#include "MegaThunderPlaneList.h"



Piloto::Piloto(string nombre, string apellido):Persona(nombre, apellido)
{
}


Piloto::~Piloto()
{
}

Evento Piloto::Despegando()
{
	cout << "DESPEGUE" << endl;
	return Evento(this, "Despegando el avion.");
}

Evento Piloto::Aterrizando()
{
	cout << "Aterrizaje" << endl;
	return Evento(this, "Aterrizando el avion.");
}

Evento Piloto::PedirComida(Azafate * azafate)
{
	cout << "Piloto pide comida" << endl;
	return Evento(this, "Piloto pide comida");
}

Evento Piloto::PedirBebida(Azafate * azafate)
{
	cout << "Piloto pide bebida" << endl;
	return Evento(this, "Piloto pide bebida.");
}

Evento Piloto::HacerAnuncio()
{
	cout << "Piloto hace anuncio" << endl;
	return Evento(this, "Piloto hace anuncio.");
}

Evento Piloto::AsignarAnuncio(Azafate * azafate)
{
	cout << "Piloto" << Nombre << " " << Apellido << " asigna anuncio a azafate." << endl;
	azafate->HacerAnuncio();
	return Evento(this, "Piloto asigna anuncio a azafate.");
}

void Piloto::Banio()
{
	
	cout << "Piloto deja de pilotear y va al baño. Copiloto empieza a pilotear."<<endl;
	
}

Evento Piloto::VuelveBanio()
{
	cout << "Piloto vuelve a pilotear."<<endl;
	return Evento(this, "Piloto vuelve a pilotear");
}

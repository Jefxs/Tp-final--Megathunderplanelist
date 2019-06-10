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

void Piloto::Despegando()
{
}

void Piloto::Aterrizando()
{
}

void Piloto::PedirComida(Azafate * azafate)
{
}

void Piloto::PedirBebida(Azafate * azafate)
{
}

void Piloto::HacerAnuncio()
{
}

void Piloto::AsignarAnuncio(Azafate * azafate)
{
	cout << "Piloto" << Nombre << " " << Apellido << " asigna anuncio a azafate." << endl;
	azafate->HacerAnuncio();
}

void Piloto::Banio(Copiloto *copiloto)
{
	//Pilotear = false;
	cout << "Piloto deja de pilotear."<<endl;
	//copiloto->setPiloteando(true);
	//MegaThunderPlaneList::ListaEventos->/////agregar evento
	cout << "Copiloto pilotea." << endl;
}

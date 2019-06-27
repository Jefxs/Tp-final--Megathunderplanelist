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

Evento *Piloto::Despegando()
{
	cout << "DESPEGUE" << endl;
	Evento *eventito = new Evento(this, "Despegando el avion.");
	return  eventito;
	
}

Evento *Piloto::Aterrizando()
{
	cout << "ATERRIZAJE" << endl;
	Evento *eventito = new Evento(this, "Aterrizando el avion.");
	return  eventito;
}

Evento *Piloto::PedirComida(Azafate * azafate)
{
	cout << "Piloto pide comida" << endl;
	Evento *eventito = azafate->EntregarComida();
	return  eventito;
	
	
}

Evento *Piloto::PedirBebida(Azafate * azafate)
{
	cout << "Piloto pide bebida" << endl;
	Evento *eventito = azafate->EntregarBebida();
	return  eventito;
}

Evento *Piloto::HacerAnuncio()
{
	cout << "Piloto hace anuncio" << endl;
	Evento *eventito = new Evento(this, "Hace anuncio.");
	return  eventito;
}

Evento *Piloto::AsignarAnuncio(Azafate * azafate)
{
	cout<< Nombre << " " << Apellido << " asigna anuncio a azafate." << endl;
	Evento *eventito = azafate->HacerAnuncio();
	return eventito;
}

void Piloto::Banio()
{
	
	cout << "Piloto deja de pilotear y va al baño. Copiloto empieza a pilotear."<<endl;
	
}

Evento *Piloto::VuelveBanio()
{
	cout << "Piloto vuelve a pilotear."<<endl;
	Evento *eventito = new Evento(this, "Vuelve del banio.");
	return  eventito;
}

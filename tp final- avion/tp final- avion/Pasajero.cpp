#include "Pasajero.h"
#include "Evento.h"
#include "Azafate.h"



Pasajero::Pasajero(string nombre, string apellido, string codigo):Persona( nombre, apellido), Codigo(codigo)
{
	
}

Pasajero::~Pasajero()
{
}

void Pasajero::Banio()
{
	cout << Nombre << " " << Apellido << " va al baño." << endl;
}

void Pasajero::Imprimir()
{
	cout << Nombre << Apellido << Codigo << endl;
}

Evento *Pasajero::PedirComida(Azafate *azafate)
{
	cout << Nombre << " " << Apellido << " pide comida." << endl;
	Evento *eventito = azafate->EntregarComida();
	return  eventito;
}

Evento *Pasajero::PedirBebida(Azafate * azafate)
{
	cout << Nombre << " " << Apellido << " pide bebida." << endl;
	Evento *eventito = azafate->EntregarBebida();
	return  eventito;
}

void Pasajero::Dormir()
{
	cout << Nombre << " " << Apellido << " se durmio." << endl;
	
}

Evento *Pasajero::PedirAyuda(Azafate * azafate)
{
	cout<< Nombre << " " << Apellido << " pide ayuda." << endl;
	Evento *eventito = azafate->AtenderPasajero();
	return  eventito;
}

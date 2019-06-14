#include "Pasajero.h"



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

void Pasajero::PedirComida(Azafate * azafate)
{
	cout << Nombre << " " << Apellido << " pide comida." << endl;
}

void Pasajero::PedirBebida(Azafate * azafate)
{
	cout << Nombre << " " << Apellido << " pide bebida." << endl;
}

void Pasajero::Dormir()
{
	cout << Nombre << " " << Apellido << " se durmio." << endl;
}

void Pasajero::PedirAyuda(Azafate * azafate)
{
	cout<< Nombre << " " << Apellido << " pide ayuda." << endl;
}

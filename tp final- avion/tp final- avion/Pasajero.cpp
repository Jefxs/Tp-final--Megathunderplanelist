#include "Pasajero.h"



Pasajero::Pasajero(string nombre, string apellido, string codigo, bool arrebato, bool descompuesto):Persona( nombre, apellido), Codigo(codigo)//error?
{
	Arrebato = arrebato;
	Descompuesto = descompuesto;
}

Pasajero::~Pasajero()
{
}

void Pasajero::Imprimir()
{
	cout << Nombre << Apellido << Codigo << endl;
}

void Pasajero::PedirComida(Azafate * azafate)
{
}

void Pasajero::PedirBebida(Azafate * azafate)
{
}

void Pasajero::Dormir()
{
}

void Pasajero::PedirAyuda(Azafate * azafate)
{
}

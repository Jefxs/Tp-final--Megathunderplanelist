#include "Marshall.h"
#include "Evento.h"


Marshall::Marshall(string nombre, string apellido, string codigo):Pasajero(nombre,apellido,codigo)
{

}


Marshall::~Marshall()
{
}

Evento* Marshall::ReducirPasajero(Pasajero * pasajero)
{

	cout << "Marshall:" << Nombre << " " << Apellido << " reduce a pasajero." << endl;
	Evento *eventito = new Evento(this, Nombre + " " + Apellido +" "+ " reduce a " +pasajero->getNombre() + " " + pasajero->getApellido() + ".");
	return eventito;
}

Evento* Marshall::operator-(Pasajero * pasajero)
{
	return this->ReducirPasajero(pasajero);
}

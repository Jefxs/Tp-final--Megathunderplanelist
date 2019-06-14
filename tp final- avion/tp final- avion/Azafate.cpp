#include "Azafate.h"
#include "Evento.h"


Azafate::Azafate(string nombre, string apellido):Persona(nombre, apellido) 
{

}


Azafate::~Azafate()
{

}

void Azafate::Banio()
{
	cout <<"Azafate:"<< Nombre << " " << Apellido << " va al baño." << endl;
}

Evento *Azafate::AtenderPasajero()
{
	cout << "Azafate:" << Nombre << " " << Apellido << " atiende a pasajero." << endl;
	Evento *eventito = new Evento(this, "Azafate atiende pasajero.");
	return eventito;
}
Evento *Azafate::HacerAnuncio()
{
	cout << "Azafate:" << Nombre << " " << Apellido << " hace anuncio." << endl;
	Evento *eventito = new Evento(this, "Azafate hace anuncio.");
	return eventito;
}
Evento *Azafate::EntregarBebida()
{
	cout << "Azafate:" << Nombre << " " << Apellido << " entrega bebida." << endl;
	Evento *eventito = new Evento(this, "Azafate entrega bebida.");
	return eventito;
}

Evento *Azafate::EntregarComida()
{
	cout << "Azafate:" << Nombre << " " << Apellido << " entrega comida." << endl;
	Evento *eventito = new Evento(this, "Azafate entrega comida.");
	return eventito;
}

Evento *Azafate::EntregarChampagne()
{
	cout << "Azafate:" << Nombre << " " << Apellido << " entrega champagne a pasajero." << endl;
	Evento *eventito = new Evento(this, "Azafate entrega champagne.");
	return eventito;
}

Evento *Azafate::HacerMasajes()
{
	cout << "Azafate:" << Nombre << " " << Apellido << " hace masajes a pasajero." << endl;
	Evento *eventito = new Evento(this, "Azafate hace masajes.");
	return eventito;
}

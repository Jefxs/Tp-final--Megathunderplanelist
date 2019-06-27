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
	cout << Nombre << " " << Apellido << " va al baño." << endl;
}

Evento *Azafate::AtenderPasajero()
{
	cout << Nombre << " " << Apellido << " atiende a pasajero." << endl;
	Evento *eventito = new Evento(this, "Azafate atiende pasajero.");
	return eventito;
}
Evento *Azafate::HacerAnuncio()
{
	cout << Nombre << " " << Apellido << " hace anuncio." << endl;
	Evento *eventito = new Evento(this, "Azafate hace anuncio.");
	return eventito;
}
Evento *Azafate::EntregarBebida()
{
	cout << Nombre << " " << Apellido << " entrega bebida." << endl;
	Evento *eventito = new Evento(this, "Azafate entrega bebida.");
	return eventito;
}

Evento *Azafate::EntregarComida()
{
	cout << Nombre << " " << Apellido << " entrega comida." << endl;
	Evento *eventito = new Evento(this, "Azafate entrega comida.");
	return eventito;
}

Evento *Azafate::EntregarChampagne()
{
	cout << Nombre << " " << Apellido << " entrega champagne a pasajero." << endl;
	Evento *eventito = new Evento(this, "Azafate entrega champagne.");
	return eventito;
}

Evento *Azafate::HacerMasajes()
{
	cout << Nombre << " " << Apellido << " hace masajes a pasajero." << endl;
	Evento *eventito = new Evento(this, "Azafate hace masajes.");
	return eventito;
}

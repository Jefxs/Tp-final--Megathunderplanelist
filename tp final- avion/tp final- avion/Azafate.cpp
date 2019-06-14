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

Evento Azafate::AtenderPasajero()
{
	cout << "Azafate:" << Nombre << " " << Apellido << " atiende a passajero." << endl;
	return Evento(this, "Azafate atiende a pasajero");
}
Evento Azafate::HacerAnuncio()
{
	cout << "Azafate:" << Nombre << " " << Apellido << " hace anuncio." << endl;
	return Evento(this, "Azafate hace anuncio");
}
Evento Azafate::EntregarBebida()
{
	cout << "Azafate:" << Nombre << " " << Apellido << " entrega bebida a pasajero." << endl;
	return Evento(this, "Azafate entrega bebida");
}

Evento Azafate::EntregarComida()
{
	cout << "Azafate:" << Nombre << " " << Apellido << " entrega comida a pasajero." << endl;
	return Evento(this, "Azafate entrega comida");
}

Evento Azafate::EntregarChampagne()
{
	cout << "Azafate:" << Nombre << " " << Apellido << " entrega champagne a pasajero." << endl;
	return Evento(this, "Azafate entrega champagne.");
}

Evento Azafate::HacerMasajes()
{
	cout << "Azafate:" << Nombre << " " << Apellido << " hace masajes a pasajero." << endl;
	return Evento(this, "Azafate hace masajes.");
}

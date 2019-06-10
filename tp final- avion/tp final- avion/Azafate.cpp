#include "Azafate.h"



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

void Azafate::AtenderPasajero()
{
	cout << "Azafate:" << Nombre << " " << Apellido << " atiende a passajero." << endl;
	//crear evento
}

void Azafate::HacerAnuncio()
{
	cout << "Azafate:" << Nombre << " " << Apellido << " hace anuncio." << endl;
}

void Azafate::EntregarBebida()
{
	cout << "Azafate:" << Nombre << " " << Apellido << " entrega bebida a pasajero." << endl;
}

void Azafate::EntregarComida()
{
	cout << "Azafate:" << Nombre << " " << Apellido << " entrega comida a pasajero." << endl;
}

void Azafate::EntregarChampagne()
{
	cout << "Azafate:" << Nombre << " " << Apellido << " entrega champagne a pasajero." << endl;
}

void Azafate::HacerMasajes()
{
	cout << "Azafate:" << Nombre << " " << Apellido << " hace masajes a pasajero." << endl;
}

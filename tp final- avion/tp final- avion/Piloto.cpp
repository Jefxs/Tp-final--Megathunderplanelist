#include "Piloto.h"



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
}

void Piloto::Banio(Copiloto *copiloto)
{
	Pilotear = false;
	cout << "Piloto deja de pilotear.";
	/*copiloto->setPiloteando(true);*///????
	cout << "Copiloto pilotea.";


    
	
}

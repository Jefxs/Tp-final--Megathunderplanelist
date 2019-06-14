#include "Ejecutivo.h"




Ejecutivo::Ejecutivo(string nombre, string apellido, string codigo):Pasajero(nombre, apellido, codigo)
{

}

Ejecutivo::~Ejecutivo()
{
}

void Ejecutivo::UsarNotebook()
{
	cout << Nombre << " " << Apellido << " usa notebook." << endl;
}

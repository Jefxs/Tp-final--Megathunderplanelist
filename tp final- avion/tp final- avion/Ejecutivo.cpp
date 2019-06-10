#include "Ejecutivo.h"




Ejecutivo::Ejecutivo(string nombre, string apellido, string codigo, bool arrebato, bool descompuesto):Pasajero(nombre, apellido, codigo, arrebato, descompuesto)
{

}

Ejecutivo::~Ejecutivo()
{
}

void Ejecutivo::UsarNotebook()
{
	cout << Nombre << " " << Apellido << " usa notebook." << endl;
}

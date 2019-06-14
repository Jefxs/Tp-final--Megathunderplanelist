#include "Marshall.h"



Marshall::Marshall(string nombre, string apellido, string codigo):Pasajero(nombre,apellido,codigo)
{

}


Marshall::~Marshall()
{
}

void Marshall::ReducirPasajero(Pasajero * pasajero)
{
	cout << "Marshall:" << Nombre << " " << Apellido << " reduce a pasajero." << endl;
}

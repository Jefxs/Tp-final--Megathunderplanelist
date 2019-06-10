#include "Marshall.h"



Marshall::Marshall(string nombre, string apellido, string codigo, bool arrebato, bool descompuesto):Pasajero(nombre,apellido,codigo,arrebato,descompuesto)
{

}


Marshall::~Marshall()
{
}

void Marshall::ReducirPasajero(Pasajero * pasajero)
{
	cout << "Marshall:" << Nombre << " " << Apellido << " reduce a pasajero." << endl;
}

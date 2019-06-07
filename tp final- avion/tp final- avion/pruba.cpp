#pragma once
#include "Persona.h"
#include "Pasajero.h"
#include <string>
#include <stdlib.h>
using namespace std;


int main() {

	Pasajero *pasajero = new Pasajero("Maria", "Casti", "3423llk",true, true);
	pasajero->Imprimir();
	delete pasajero;
	system("pause");
	return 0;
}
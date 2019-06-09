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
	//funciona constructor de persona

	system("pause");
	return 0;

}
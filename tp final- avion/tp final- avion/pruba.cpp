#pragma once
#include "Persona.h"
#include "Pasajero.h"
#include "Ejecutivo.h"
#include "Piloto.h"
#include "Copiloto.h"
#include <string>
#include <stdlib.h>
//para utilizar la cllase hija hay que agregar la clase padre
using namespace std;


int main() {

	Pasajero *pasajero = new Pasajero("Maria", "Casti", "3423llk",true, true);
	pasajero->Imprimir();
	delete pasajero;
	//funciona constructor de persona

	Ejecutivo *ejecutivo = new Ejecutivo("Adrian", "castiperry", "rtete", true, true);
	ejecutivo->Banio();
	ejecutivo->Imprimir();



//	Copiloto *copiloto = new Copiloto("leche", "lacha");
	

//	Piloto *piloto = new Piloto("lecheee", "nacha");

	delete ejecutivo;

	system("pause");
	return 0;

}
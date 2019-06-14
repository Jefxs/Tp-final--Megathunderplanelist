#pragma once
#include "Persona.h"
#include "Pasajero.h"
#include "Ejecutivo.h"
#include "Piloto.h"
#include "Turista.h"
#include "Copiloto.h"
#include "Marshall.h"
#include "Primera.h"
#include <string>
#include "Evento.h"
#include "Azafate.h"
#include <stdlib.h>
//para utilizar la clase hija hay que agregar la clase padre
using namespace std;



int main() {
	Ejecutivo *ejecutivo = new Ejecutivo("Topisima", "(Sandra de Noche)", "ej2312341");
	Turista *turista = new Turista("Mari", "Castidad", "t4390939ak");
	Primera *primera = new Primera("Andres", "Naddeo", "p40901759a1");
	Piloto *piloto = new Piloto("Celia", "Etcheverry");
	Copiloto *copiloto = new Copiloto("Agustina", "Mustard");
	Marshall *marshall = new Marshall("Dami", "cloclo", "t3764982");
	Azafate *azafate[R];
	azafate[1] = new Azafate("Pampa", "Fafafa");
	azafate[0] = new Azafate("Franco", "Ferrante");


	piloto->Despegando();
	ejecutivo->UsarNotebook();
	primera->Masajes(azafate[1]);
	primera->Champagne(azafate[0]);
	turista->Banio();
	turista->Dormir();
	ejecutivo->PedirAyuda(azafate[0]);
	primera->PedirBebida(azafate[1]);
	turista->PedirBebida(azafate[1]);
	marshall->ReducirPasajero(turista);
	azafate[1]->Banio();
	azafate[0]->HacerAnuncio();
	piloto->AsignarAnuncio(azafate[0]);
	piloto->Banio();
	piloto->HacerAnuncio();
	piloto->VuelveBanio();
	piloto->PedirBebida(azafate[1]);
	piloto->PedirComida(azafate[0]);
	copiloto->LLamarTorreControl();
	piloto->Aterrizando();


	
	delete ejecutivo;
	delete turista;
	delete primera;
	delete piloto;
	delete copiloto;
	delete marshall;
	delete azafate[0];
	delete azafate[1];


	system("pause");
	return 0;

}
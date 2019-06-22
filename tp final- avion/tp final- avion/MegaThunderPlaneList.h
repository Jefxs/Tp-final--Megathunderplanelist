#pragma once
#include "Evento.h"
#include "cLista.h"
#include "Persona.h"
#include "Piloto.h"
#include "Copiloto.h"
#include "Pasajero.h"
#include "Azafate.h"
#define R 2

class MegaThunderPlaneList
{
	friend class Evento;
	cLista <Evento>*ListaEventos;
	cLista <Persona>*ListaPersonas;
	cLista <string>*ListaCodigos;
	friend int main();//para poder acceder a la lista de personas desde el main 

public:
	static int HorasDeVuelvo;
	MegaThunderPlaneList(cLista <string> *codigos);
	~MegaThunderPlaneList();
	void RegistrarTripulantes(Piloto *piloto, Copiloto *copiloto, Azafate * azafate[R]);
	void ValidarCodigo(cLista <Pasajero>*listaposiblesp); // solo pasajeros tienen codigo
	void ImprimirListaEventos();
	void AgregarEvento(Evento *evento);



};


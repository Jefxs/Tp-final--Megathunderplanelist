#pragma once
#include "Evento.h"
#include "cLista.h"
#include "Persona.h"
#include "Piloto.h"
#include "Pasajero.h"
#define R 2

class MegaThunderPlaneList
{
	friend class Evento;
	cLista <Evento>*ListaEventos;
	cLista <Persona>*ListaPersonas;
	cLista <string>*ListaCodigos;
public:
	static int HorasDeVuelvo;
	MegaThunderPlaneList();
	~MegaThunderPlaneList();
	void RegistrarTripulantes(Piloto *piloto, Copiloto *copiloto, Azafate * azafate[R]);
	void ValidarCodigo(cLista <Pasajero>*listaposiblesp); // solo pasajeros tienen codigo
	void ImprimirLista();
	void AgregarEvento(Evento *evento);



};


#pragma once
#include "Evento.h"
#include "cLista.h"
#include "Persona.h"

class MegaThunderPlaneList
{
	cLista <Evento>*ListaEventos;
	cLista <Persona>*ListaPersonas;
	string *ListaCodigos[20];
public:
	static int HorasDeVuelvo;
	MegaThunderPlaneList();
	~MegaThunderPlaneList();
	void RegistrarTripulantes();
	void ValidarCodigo();
	void ImprimirLista();

};


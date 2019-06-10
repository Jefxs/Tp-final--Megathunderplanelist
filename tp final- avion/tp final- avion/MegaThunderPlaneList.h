#pragma once
#include "Evento.h"
#include "cLista.h"
#include "Persona.h"
#include "Piloto.h"


class MegaThunderPlaneList
{
	friend class Evento;
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


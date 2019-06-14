#include "MegaThunderPlaneList.h"

//FALTA HACER

MegaThunderPlaneList::MegaThunderPlaneList()
{
	ListaCodigos = NULL;
	ListaEventos = NULL;
	ListaPersonas = NULL;
}


MegaThunderPlaneList::~MegaThunderPlaneList()
{
}

void MegaThunderPlaneList::RegistrarTripulantes(Piloto * piloto, Copiloto * copiloto, Azafate * azafate[R])
{
}


void MegaThunderPlaneList::ValidarCodigo(cLista<Pasajero>* listaposiblesp)
{
}


void MegaThunderPlaneList::ImprimirLista()
{
}

void MegaThunderPlaneList::AgregarEvento(Evento *evento)//evento tiene una persona y un string
{
	ListaEventos->AgregarItem(evento);
}


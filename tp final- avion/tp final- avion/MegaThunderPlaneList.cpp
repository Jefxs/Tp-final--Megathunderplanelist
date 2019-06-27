#include "MegaThunderPlaneList.h"

int MegaThunderPlaneList::HorasDeVuelo = 0;

MegaThunderPlaneList::MegaThunderPlaneList(cLista <string> *codigos)
{
	ListaCodigos = new cLista <string>();
	for (int i = 0; i < codigos->getCA(); i++)
	{
		ListaCodigos->Agregarstring(*(codigos->getItem(0)));
	}
	ListaEventos = new cLista <Evento>();//=NULL?
	ListaPersonas = new cLista <Persona>();//=NULL?
}


MegaThunderPlaneList::~MegaThunderPlaneList()
{
	//delete ListaCodigos;
	delete ListaEventos;
	//delete ListaPersonas;
}

void MegaThunderPlaneList::RegistrarTripulantes(Piloto * piloto, Copiloto * copiloto, Azafate * azafate[R])
{
	//agrego tripulantes a lista
	ListaPersonas->AgregarItem(piloto);
	ListaPersonas->AgregarItem(copiloto);
	for (int i = 0; i < R; i++)
	{
		ListaPersonas->AgregarItem(azafate[i]);
	}
}


void MegaThunderPlaneList::ValidarCodigo(cLista<Pasajero>* listaposiblesp)
{
	int r = listaposiblesp->getCA();
	int k = ListaCodigos->getCA() ;

	int j = 0;
	for (int i = 0; i < r; i++)
	{
		for (j = 0; j < k; j++)
		{
			if ((*listaposiblesp)[i]->getCodigos() == (*(*ListaCodigos)[j]))//si la persona esta en la lista de codigos pasa al avion
			{
				ListaPersonas->AgregarItem((*listaposiblesp)[i]);
				break;
			}			
		}
		if (j == k)
		{
			cout << "La persona " << (*listaposiblesp)[i]->getNombre() << " " << (*listaposiblesp)[i]->getApellido() << " no estaba en la lista de vuelo." << endl;//   #REBOTADO

		}
	}
}


void MegaThunderPlaneList::ImprimirListaEventos()
{
	ListaEventos->Listar();
}

void MegaThunderPlaneList::AgregarEvento(Evento *evento)//evento tiene una persona y un string
{
	ListaEventos->AgregarItem(evento);
}

void MegaThunderPlaneList::operator+(Evento * evento)
{
	AgregarEvento(evento);
}

void MegaThunderPlaneList::operator++()
{
	HorasDeVuelo = HorasDeVuelo + 1;
}

void MegaThunderPlaneList::operator==(cLista<Pasajero>* listaposiblesp)
{
	ValidarCodigo(listaposiblesp);
}




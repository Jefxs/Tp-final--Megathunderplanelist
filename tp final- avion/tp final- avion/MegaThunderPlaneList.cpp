#include "MegaThunderPlaneList.h"

int MegaThunderPlaneList::HorasDeVuelo = 0;

MegaThunderPlaneList::MegaThunderPlaneList(cLista <Codigo> *codigos)
{
	ListaCodigos = codigos;
	ListaEventos = new cLista <Evento>();
	ListaPersonas = new cLista <Persona>();
}

MegaThunderPlaneList::~MegaThunderPlaneList()
{
	delete ListaEventos;
	
}

void MegaThunderPlaneList::RegistrarTripulantes(Piloto * piloto, Copiloto * copiloto, Azafate * azafate[R])
{
	//agrego tripulantes a lista
	try
	{
		ListaPersonas->AgregarItem(piloto);
		ListaPersonas->AgregarItem(copiloto);
		for (int i = 0; i < R; i++)
		{
			ListaPersonas->AgregarItem(azafate[i]);
		}
	}
	catch (exception* e) {
		cout << e->what() << endl;
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
			if ((*listaposiblesp)[i]->getCodigos() == (*ListaCodigos)[j]->getCodigo())//si la persona esta en la lista de codigos pasa al avion
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




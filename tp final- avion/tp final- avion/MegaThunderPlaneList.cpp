#include "MegaThunderPlaneList.h"


MegaThunderPlaneList::MegaThunderPlaneList(cLista <string> *codigos)
{
	ListaCodigos = codigos;
	ListaEventos = new cLista <Evento>();//=NULL?
	ListaPersonas = new cLista <Persona>();//=NULL?
}


MegaThunderPlaneList::~MegaThunderPlaneList()
{
	delete ListaCodigos;
	delete ListaEventos;
	delete ListaPersonas;
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
	int r = listaposiblesp->getCA()-1;
	int k = ListaCodigos->getCA() - 1;

	int j = 0;
	for (int i = 0; i < r; i++)
	{
		for (j = 0; j < k; j++)
		{
			if (listaposiblesp->getItem(i)->getCodigo() == *(ListaCodigos->getItem(j)))//si la persona esta en la lista de codigos pasa al avion
			{
				/*ListaPersonas->AgregarItem(listaposiblesp->getItem(i));	*/
				ListaPersonas->AgregarItem(listaposiblesp->getItem(i));
				break;
			}			
		}
		if (j == k)
			cout << "La persona " << listaposiblesp->getItem(i)->getNombre() << "" << listaposiblesp->getItem(i)->getApellido() << "no estaba en la lista de vuelo." << endl;//   #REBOTADO
		//NO PODEMOS USAR EL OPERADOR[] SOBRECARGADO ASI PONEMOS listaposibles[i] en vez de listaposiblesp->getItem(i)
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


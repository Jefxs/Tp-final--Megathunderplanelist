#pragma once
#include "Evento.h"
#include "cLista.h"
#include "Persona.h"
#include "Piloto.h"
#include "Copiloto.h"
#include "Pasajero.h"
#include "Azafate.h"
#include "Codigo.h"
#define R 2

class MegaThunderPlaneList
{
	friend class Evento;
	cLista <Evento>*ListaEventos;
	cLista <Persona>*ListaPersonas;
	cLista <Codigo>*ListaCodigos;
	friend int main();//para poder acceder a la lista de personas desde el main 
	friend void  Y_pasaron_cosas_en_el_vuelo(MegaThunderPlaneList *megatrueno, Azafate *azafates[R]);

public:
	static int HorasDeVuelo;
	MegaThunderPlaneList(cLista <Codigo> *codigos);
	~MegaThunderPlaneList();
	void RegistrarTripulantes(Piloto *piloto, Copiloto *copiloto, Azafate * azafate[R]);
	void ValidarCodigo(cLista <Pasajero>*listaposiblesp); // solo pasajeros tienen codigo
	void ImprimirListaEventos();
	void AgregarEvento(Evento *evento);
	void operator+(Evento *evento);
	void operator++();
	void operator==(cLista<Pasajero>* listaposiblesp);
	friend ostream & operator<<(ostream &out,const MegaThunderPlaneList *megita);//IMPRIME LA LISTA DE EVENTOS
	//friend istream & operator>>(ostream &in, MegaThunderPlaneList &megita);
	friend ostream & operator<(ostream &o, const MegaThunderPlaneList *megita);//IMPRIME LA LISTA DE PERSONAS

};


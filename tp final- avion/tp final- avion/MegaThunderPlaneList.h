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
	friend void  Y_pasaron_cosas_en_el_vuelo(MegaThunderPlaneList *megatrueno, Azafate *azafates[R]);

public:
	static int HorasDeVuelo;
	MegaThunderPlaneList(cLista <string> *codigos);
	~MegaThunderPlaneList();
	void RegistrarTripulantes(Piloto *piloto, Copiloto *copiloto, Azafate * azafate[R]);
	void ValidarCodigo(cLista <Pasajero>*listaposiblesp); // solo pasajeros tienen codigo
	void ImprimirListaEventos();
	void AgregarEvento(Evento *evento);
	void operator+(Evento *evento);
	void operator++();
	void operator==(cLista<Pasajero>* listaposiblesp);
	friend ostream & operator<<(ostream &out,const MegaThunderPlaneList *megita);
	//friend istream & operator>>(ostream &in, MegaThunderPlaneList &megita);


};


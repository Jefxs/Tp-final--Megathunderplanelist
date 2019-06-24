#include "Persona.h"
#include "Pasajero.h"
#include "Ejecutivo.h"
#include "Piloto.h"
#include "Turista.h"
#include "Copiloto.h"
#include "Marshall.h"
#include "Primera.h"
#include <string>
#include "Evento.h"
#include "Azafate.h"
#include <stdlib.h>
#include <time.h>
#include "cLista.h"
#include <iostream>
//para utilizar la clase hija hay que agregar la clase padre
using namespace std;
#define N 3 // cant pasajeros
#define G 99 //cant de filas

void GenerarXPasajeros(cLista <Pasajero> *Lposibles, cLista <string>*listacodigos);
void Y_pasaron_cosas_en_el_vuelo(MegaThunderPlaneList *megatrueno, Azafate *azafates);


int main() {
	/*Ejecutivo *ejecutivo = new Ejecutivo("Topisima", "(Sandra de Noche)", "ej2312341");
	Turista *turista = new Turista("Mari", "Castidad", "t4390939ak");
	Primera *primera = new Primera("Andres", "Naddeo", "p40901759a1");*/
	Piloto *piloto = new Piloto("Celia", "Etcheverry");
	Copiloto *copiloto = new Copiloto("Agustina", "Mustard");
	Marshall *marshall = new Marshall("Dami", "cloclo", "t3764982");
	Azafate *Azafates[R];
	Azafates[1] = new Azafate("Pampa", "Fafafa");
	Azafates[0] = new Azafate("Franco", "Ferrante");


	cLista <Pasajero> *Lposibles = new cLista <Pasajero>();
	cLista <string>*listacodigos = new cLista<string>();

	//GenerarXPasajeros(Lposibles, listacodigos);

	

	//Lposibles->Listar();
	MegaThunderPlaneList *megita = new MegaThunderPlaneList(listacodigos);
	//Turista *turista = new Turista("Mari", "Castidad", "t4390939ak");
	copiloto->LLamarTorreControl(); //hacer que sea evento
	*megita + piloto->Despegando();
	Y_pasaron_cosas_en_el_vuelo(megita, Azafates);// falta 
	copiloto->LLamarTorreControl();
	*megita + piloto->Aterrizando();


	Evento *p = new Evento(marshall, "choloni");
	Evento *j = new Evento(marshall, "Waffles");
	*megita + p; //sobrecarga que llama a agregar evento
	/*string *codigo = NULL;
	*codigo = "TU40901759A02";
	listacodigos->Agregarstring(codigo);
	megita->ListaCodigos->Agregarstring(codigo);
	string p=(megita->ListaCodigos->getItem(0))->c_str();
	cout << p;*/


	*megita + j;
	*megita + (*marshall - turista); // sobrecarga que llama a agregar evento y sobrecarga del - que llama a reducir pasajero
	//*megita == Lposibles;  //sobrecarga que llama a ValidarCodigo()
	cout << megita; //sobrecarga << imprime la lista de eventos
	
	

	delete p;
	delete j;
	delete megita;
	//megita->

	//megita->RegistrarTripulantes(piloto, copiloto, azafate);//agrega a los tripulantes a la Lista de personas 
	//megita->ValidarCodigo(Lposibles);//los pasajeros entran al avion...o no...
	//megita->AgregarEvento(piloto->Despegando());
	//megita->AgregarEvento(piloto->HacerAnuncio());
	//megita->ListaPersonas->getItem(8)->



	//



	//piloto->Despegando();
	//ejecutivo->UsarNotebook();
	//primera->Masajes(azafate[1]);
	//primera->Champagne(azafate[0]);
	//turista->Banio();
	/*turista->Dormir();
	ejecutivo->PedirAyuda(azafate[0]);
	primera->PedirBebida(azafate[1]);
	turista->PedirBebida(azafate[1]);*/
	//marshall->ReducirPasajero(turista);
	//azafate[1]->Banio();
	//azafate[0]->HacerAnuncio();
	//piloto->AsignarAnuncio(azafate[0]);
	//piloto->Banio();
	//piloto->HacerAnuncio();
	//piloto->VuelveBanio();
	//piloto->PedirBebida(azafate[1]);
	//piloto->PedirComida(azafate[0]);
	//copiloto->LLamarTorreControl();
	//piloto->Aterrizando();



	////delete ejecutivo;
	////delete turista;
	////delete primera;
	//delete piloto;
	//delete copiloto;
	delete marshall;
	delete Azafates[0];
	delete Azafates[1];
	delete Lposibles;
	delete listacodigos;


	system("pause");
	return 0;

}
ostream & operator<< (ostream & out, const MegaThunderPlaneList *megita)
{
	for (int i = 0; i < megita->ListaEventos->getCA(); i++)
	{
		out << megita->ListaEventos->getItem(i)->getCodigo() << endl;
	}
	out << "Horas de vuelo: " << megita->HorasDeVuelo << endl;
	return out;
}
void GenerarXPasajeros(cLista <Pasajero> *listitaposibles, cLista <string>*listitacodigos)
{
	int cont = 0;
	long int DNI = rand() % 20000001 + 20000000;
	string tipoPasajero[3] = { "TU", "BS", "PC" };
	string array[10] = { "A", "B", "C", "D", "E", "F", "G", "H", "I","J" };
	string asiento, *codigo, a;
	codigo = NULL;
	int u, y, x;
	

		for (u = 0; u < 10; u++)//for que recorrer las columnas (a,b,c,d,e....)
		{
			for (y = 1; y < G; y++)//for que recorre las filas (1-G)
			{
				if (cont > N)//si ya se crearon los n pasajeros break
					break;
				a = tipoPasajero[rand() % 3 + 0];
				cont++;
				asiento = array[u] + to_string(y);
				DNI = DNI + cont;
				*codigo = a + to_string(DNI)+asiento;
				if (a.c_str()== "TU")//c._str pasa un string a cadena de chars y ahi si se puede hacer el cmp
				{
					Turista*T = new Turista("Nombre" + to_string(cont), "Apellido" + to_string(cont), *codigo);
					listitaposibles->AgregarItem(T);
				}
				if (strcmp(a.c_str(), "BS") == 0)
				{
					Ejecutivo*E = new Ejecutivo("Nombre" + to_string(cont), "Apellido" + to_string(cont), *codigo);
					listitaposibles->AgregarItem(E);
				}
				if (strcmp(a.c_str(), "EJ") == 0)
				{
					Primera*P = new Primera("Nombre" + to_string(cont), "Apellido" + to_string(cont), *codigo);
					listitaposibles->AgregarItem(P);
				}
				x = rand() % 100 + 1;
				if (x !=27)//1% de chances de que no se agregue el codigo de esta persona a la lista de codigos para pasar al avion 
			    // esta persona podra entrar al avion
					listitacodigos->Agregarstring(codigo);
				//si no se entro al if entonces esta persona sera #REBOTADA al intentar entrar al avion				
					
			}

			if (cont > N)
			{//se crea el marshall y se lo agrega a las lista// esta undercover por esta aca con los pasajeros y es igual de basic
				asiento = array[u] + to_string(y);
				*codigo = a + to_string(DNI + 1) + asiento;
				Marshall*M = new Marshall("Nombre" + to_string(cont+1), "Apellido" + to_string(cont+1), *codigo);
				listitaposibles->AgregarItem(M);
				listitacodigos->Agregarstring(codigo);
				break;

			}		
		
		}
		//delete codigo;
}

void Y_pasaron_cosas_en_el_vuelo(MegaThunderPlaneList *megatrueno, Azafate *azafates[R])
{
	int q, L,m, p, y, h,c,b;
	c = 0;

	while (true)//en realidad es while (horasdevuelo< a algo)
	{
		int s = megatrueno->ListaPersonas->getCA();
		q = rand() % s;//para devolver una persona x de la lista
		Turista *T = dynamic_cast<Turista*>(megatrueno->ListaPersonas->getItem(q));//seria con listaperonas[q] pero no funciona la sobrecarga!!!!!
		Ejecutivo *E = dynamic_cast<Ejecutivo*>(megatrueno->ListaPersonas->getItem(q));
		Primera *P = dynamic_cast<Primera*>(megatrueno->ListaPersonas->getItem(q));
		Marshall *M = dynamic_cast<Marshall*>(megatrueno->ListaPersonas->getItem(q));
		Azafate *A = dynamic_cast<Azafate*>(megatrueno->ListaPersonas->getItem(q));
		Piloto *Pi = dynamic_cast<Piloto*>(megatrueno->ListaPersonas->getItem(q));
		Copiloto *C = dynamic_cast<Copiloto*>(megatrueno->ListaPersonas->getItem(q));

		if (T != NULL)//si es turista
		{
			L = rand() % 5;
			m = rand() % R;
			if (L == 0)
				*megatrueno + T->PedirComida(azafates[m]);
			if (L == 1)
				*megatrueno + T->PedirBebida(azafates[m]);
			if (L == 2)
				*megatrueno + T->PedirAyuda(azafates[m]);
			if (L == 3)
				T->Banio();
			if (L == 4)
				T->Dormir();
		}
		if (E != NULL)//si es ejecutivo
		{
			L = rand() % 6;
			m = rand() % R;
			if (L == 0)
				*megatrueno + E->PedirComida(azafates[m]);
			if (L == 1)
				E->PedirBebida(azafates[m]);
			if (L == 2)
				*megatrueno + E->PedirAyuda(azafates[m]);
			if (L == 3)
				E->Banio();
			if (L == 4)
				E->Dormir();
			if (L == 5)
				E->UsarNotebook();
		}
		if (P != NULL)//si es primera
		{
			L = rand() % 8;
			m = rand() % R;
			if (L == 0)
				*megatrueno + P->PedirComida(azafates[m]);
			if (L == 1)
				P->PedirBebida(azafates[m]);
			if (L == 2)
				*megatrueno + P->PedirAyuda(azafates[m]);
			if (L == 3)
				P->Banio();
			if (L == 4)
				P->Dormir();
			if (L == 5)
				P->UsarNotebook();
			if (L == 5)
				*megatrueno + P->Champagne(azafates[m]);
			if (L == 5)
				*megatrueno + P->Masajes(azafates[m]);
		}
		if (M != NULL)//si es marshall
		{
			Pasajero *U= NULL;
			while (c != 1)
			{
				b = rand() % s;//para devolver una persona x de la lista
				U = dynamic_cast<Pasajero*>(megatrueno->ListaPersonas->getItem(b));
				if (U != NULL)//es un pasajero, no un tripulante
				{
					Marshall *V = dynamic_cast<Marshall*>(megatrueno->ListaPersonas->getItem(b));
					if (V == NULL)//no es el marshal entonces estamos bien
						c = 1;
				}				
			}
		
			*megatrueno + (M->ReducirPasajero(U));//reduce a un pasajero random que no es ni 
			//tripulante ni el mismo marshall y esto devuelve un evento entonces se agrega a la lista de eventos
		}
		if (A != NULL)//si es azafate
		{		
				A->Banio();
		}
		if (Pi != NULL)//si es piloto
		{
			L = rand() % 5;
			m = rand() % R;
			
			m = rand() % R;
			if (L == 0)
				*megatrueno + Pi->AsignarAnuncio(azafates[m]);
			if (L == 1)
			{
				Pi->Banio();
				*megatrueno + Pi->VuelveBanio();
			}
			if (L == 2)
				*megatrueno + Pi->PedirBebida(azafates[m]);
			if (L == 3)
				*megatrueno + Pi->PedirComida(azafates[m]);
			if (L == 4)
				*megatrueno + Pi->HacerAnuncio();
		}
		if (C != NULL)//si es copiloto
		{
			L = rand() % 5;
			m = rand() % R;

			m = rand() % R;
			if (L == 0)
				*megatrueno + C->AsignarAnuncio(azafates[m]);
			if (L == 1)
				C->Banio();
			if (L == 2)
				*megatrueno + C->PedirBebida(azafates[m]);
			if (L == 3)
				*megatrueno + C->PedirComida(azafates[m]);
			if (L == 4)
				*megatrueno + C->HacerAnuncio();
		}

		delete T;///////// es necesario?
		delete P;
		delete E;
		delete M;
		delete A;
		delete Pi;
		delete C;
		
	}
}
	

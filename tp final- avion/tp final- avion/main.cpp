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



int main() {
	/*Ejecutivo *ejecutivo = new Ejecutivo("Topisima", "(Sandra de Noche)", "ej2312341");
	Turista *turista = new Turista("Mari", "Castidad", "t4390939ak");
	Primera *primera = new Primera("Andres", "Naddeo", "p40901759a1");*/
	//Piloto *piloto = new Piloto("Celia", "Etcheverry");
	//Copiloto *copiloto = new Copiloto("Agustina", "Mustard");
	Marshall *marshall = new Marshall("Dami", "cloclo", "t3764982");
	//Azafate *azafate[R];
	//azafate[1] = new Azafate("Pampa", "Fafafa");
	//azafate[0] = new Azafate("Franco", "Ferrante");


	cLista <Pasajero> *Lposibles = new cLista <Pasajero>();
	cLista <string>*listacodigos = new cLista<string>();
	//GenerarXPasajeros(Lposibles, listacodigos);
	Lposibles->Listar();
	MegaThunderPlaneList *megita=new MegaThunderPlaneList(listacodigos);
	Turista *turista = new Turista("Mari", "Castidad", "t4390939ak");
	
	
	Evento *p = new Evento(marshall,"choloni");
	Evento *j = new Evento(marshall, "Waffles");
	*megita + p;
	*megita + j;
	*megita + (*marshall - turista);
	cout << megita;
	
	

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
	//delete marshall;
	//delete azafate[0];
	//delete azafate[1];
	delete Lposibles;
	delete listacodigos;


	system("pause");
	return 0;

}
ostream & operator<< (ostream & out, const MegaThunderPlaneList *megita)
{
	for (unsigned int i = 0; i < megita->ListaEventos->getCA(); i++)
	{
		out << megita->ListaEventos->getItem(i)->getCodigo() << endl;
	}
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

}
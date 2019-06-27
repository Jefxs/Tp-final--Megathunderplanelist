#pragma once
#include "Persona.h"
#include <string>
//CLASE HIJA DE PERSONA
using namespace std;

class Azafate;//lo que nos dijo pampa
class Evento;
class Pasajero :public Persona //HERENCIA
{
protected://para que se lo pase a los hijos
	const string Codigo;//este no es static xq lo creamos nosotros para la simulacion
		
public:
	
	Pasajero(string nombre, string apellido, string codigo);
	Pasajero();
	~Pasajero();
	void Banio();
	void Imprimir();
	Evento *PedirComida(Azafate *azafate);
	Evento *PedirBebida(Azafate *azafate);
	void Dormir();
	Evento *PedirAyuda(Azafate *azafate);
	string getCodigos()const { return Codigo; }
	
};


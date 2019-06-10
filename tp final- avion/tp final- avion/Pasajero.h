#pragma once
#include "Persona.h"
#include <string>
//CLASE HIJA DE PERSONA
using namespace std;

class Azafate;//lo que nos dijo pampa
class Pasajero :public Persona //HERENCIA
{
protected://para que se lo pase a los hijos
	const string Codigo;//este no es static xq lo creamos nosotros para la simulacion
	bool Arrebato;
	bool Descompuesto;
	
public:
	Pasajero(string nombre, string apellido, string codigo, bool arrebato, bool descompuesto);
	~Pasajero();
	void Banio();
	void Imprimir();
	void PedirComida(Azafate *azafate);
	void PedirBebida(Azafate *azafate);
	void Dormir();
	void PedirAyuda(Azafate *azafate);
	//setters y getters

};


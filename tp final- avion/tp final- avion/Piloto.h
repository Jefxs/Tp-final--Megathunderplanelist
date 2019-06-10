#pragma once
#include "Persona.h"
class Evento;
class Azafate;
class Copiloto;
//HIJA DE PERSONA
class Piloto: public Persona//HERENCIA
{
	
	Evento *EventoP;
protected:
	bool Pilotear;
	//bool Despegue;
	//bool Aterrizaje;
	
public:
	Piloto(string nombre, string apellido);
	~Piloto();
	void setPiloteando(bool piloteo) { Pilotear = piloteo; }
	void Despegando();
	void Aterrizando();
	void PedirComida(Azafate *azafate);
	void PedirBebida(Azafate *azafate);
	void HacerAnuncio();
	void AsignarAnuncio(Azafate *azafate);
	void Banio(Copiloto *copiloto);
};


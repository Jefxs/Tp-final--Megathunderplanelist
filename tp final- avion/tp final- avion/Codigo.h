#pragma once
#include <string>
using namespace std;
class Codigo
{
	string codiguito;
public:
	Codigo();
	Codigo(string codi);
	string getCodigo() { return codiguito; }
	~Codigo();
};


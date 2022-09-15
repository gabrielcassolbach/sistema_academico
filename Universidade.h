#pragma once
#include <iostream>
#include "ListaDepartamentos.h"
using namespace std;

class Departamento;
class ElDepartamento;
 
class Universidade
{
private: 
	char nome[30];
	Departamento* pDptos[50];

public:
	Universidade(); 
	Universidade(int nd, char* c); 
	~Universidade(); 
	void informa(int j);
	void setNome(const char* name);
	char* getNome();
	void setDptosFiliados(Departamento* departamento, int i);
};

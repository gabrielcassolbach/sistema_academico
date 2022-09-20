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
	ListaDepartamentos LUnivDep;
 
public:
	Universidade(); 
	Universidade(char* c); 
	~Universidade(); 
	void setNome(const char* name);
	char* getNome();
	void setDptosFiliados(Departamento* departamento);
};




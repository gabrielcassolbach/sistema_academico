#pragma once
#include <iostream>
using namespace std;

class Departamento;

class ElDepartamento 
{
private:
	Departamento* pDep; // gera a conex�o.

public:
	ElDepartamento* pProx;
	ElDepartamento* pAtras;

public:
	ElDepartamento();
	~ElDepartamento();
	char* getNome();
	void setDepartamento(Departamento* pdep);
	Departamento* getDepartamento();
};

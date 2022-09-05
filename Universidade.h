#pragma once
#include <iostream>

using namespace std;

class Departamento;

class Universidade
{
private: 
	char nome[30];
	Departamento* pDptos[50];

public:
	Universidade(); 
	~Universidade(); 
	void informa(int j);
	void setNome(const char* name);
	char* getNome();
	void setDptosFiliados(Departamento* departamento, int i);
};

#pragma once
#include <iostream>
using namespace std;

class Departamento;
class ElDepartamento;

class Universidade
{
private: 
	char nome[30];
	Departamento* pDptos[50];
	// Criar uma lista de Departamentos por meio de uma nova Classe ElDepartamento.
	ElDepartamento* pDepAtual;
	ElDepartamento* pDepPrim;

public:
	Universidade(); 
	~Universidade(); 
	void informa(int j);
	void setNome(const char* name);
	char* getNome();
	void setDptosFiliados(Departamento* departamento, int i);
	void incluaDepartamentos(Departamento* pdep);
	void listaDepartamentos();
};

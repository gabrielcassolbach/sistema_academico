#pragma once
#include <iostream>
#include <string.h>
#include "Universidade.h"
#include "Departamento.h"
using namespace std;

class Pessoa
{
protected:
	int diaP, mesP, anoP, idadeP;
	char nomeP[30];
	
public:
	Pessoa(); 
	~Pessoa(); 
	Pessoa (int dia, int mes, int ano, const char* nome); 
	void inicializa(int dia, int mes, int ano, const char* nome);
	void calc_idade(int diaAT, int mesAT, int anoAT);
	int getIdade();
	char* getNome();
};
	

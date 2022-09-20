#pragma once
#include "Universidade.h"
#include "ListaDisciplinas.h"
 
class Disciplina;
class ElDisciplina;

class Departamento
{
private:
	char nome[30];
	Universidade* univFiliado;
	ListaDisciplinas ListaDiscplDep;
 
public:
	Departamento();
	Departamento(int nd, char* c);
	~Departamento();
	void setNome(char* name);
	char* getNome();
	void setUnivFiliado(Universidade* universidade);
	void setDiscplFiliado(Disciplina* pdisciplina);
	void informa();
};

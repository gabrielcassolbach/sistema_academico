#pragma once
#include "Universidade.h"
class Disciplina;
class ElDisciplina;

class Departamento
{
private:
	char nome[30];
	Universidade* univFiliado;
	// Cada departamento deve ser capaz de armazenar uma lista de disciplinas.
	ElDisciplina* pElDiscipAtual;
	ElDisciplina* pElDiscipPrim;

public:
	Departamento();
	Departamento(const char* name);
	~Departamento();

	void setNome(const char* name);
	char* getNome();
	void setUnivFiliado(Universidade* universidade);
	void informa();
	void incluaDisciplina(Disciplina* pd); 
	void listedisciplinas(); 
};

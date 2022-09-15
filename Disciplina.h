#pragma once
#include "Departamento.h"
#include "ListaAlunos.h"

class Aluno;
class ElAluno;
class Departamento;
class ListaAlunos;

class Disciplina 
{	
private:
	char nome[150];
	int num_alunos; int contador_alunos;
	Departamento* pDptoAssociado;
	ListaAlunos ListaDeAlunos;

public:
	Disciplina();
	Disciplina(int na, char* c);
	~Disciplina();
	void setNome(const char* name); 
	char* getNome();
	void setDepartamento(Departamento* pdpto);
	void incluaAlunos(Aluno* pa);
	void listeAlunos();
};

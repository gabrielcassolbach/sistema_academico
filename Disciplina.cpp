#include "Disciplina.h"
#include "ElAluno.h"
#include "Aluno.h"
#include <string.h>

Disciplina::Disciplina():
ListaDeAlunos()
{
	num_alunos = 0; contador_alunos = 0;
	pDptoAssociado = NULL;
	strcpy(nome, "");
}

Disciplina::Disciplina(int na, char* c):
ListaDeAlunos(na,c)
{
	num_alunos = 45; contador_alunos = 0;
	pDptoAssociado = NULL;
	strcpy(nome, c);
}

Disciplina::~Disciplina()
{
	pDptoAssociado = NULL; 
}

void Disciplina::setNome(const char* name)
{
	strcpy(nome, name);
}

char* Disciplina::getNome()
{
	return nome;
}

void Disciplina::incluaAlunos(Aluno *pa)
{
	ListaDeAlunos.incluaAluno(pa);
}

void Disciplina::listeAlunos()
{
	ListaDeAlunos.listeAlunos();
}

void Disciplina::setDepartamento(Departamento* pdpto)
{
	pDptoAssociado = pdpto;
}
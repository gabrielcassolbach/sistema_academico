#include "Departamento.h" 
#include "Disciplina.h"
#include "ElDisciplina.h"
#include <string.h>
 
Departamento::Departamento():
ListadeDisciplinas()
{
	strcpy(nome, "");
	univFiliado = NULL;
}

Departamento::Departamento(int nd, char* c):
ListadeDisciplinas(nd, c)
{
	strcpy(nome, "");
	univFiliado = NULL;
}


Departamento::~Departamento()
{
	univFiliado = NULL;
}

void Departamento::setNome(char* name)
{
	strcpy(nome, name);
}

char* Departamento::getNome()
{
	return nome;
}

void Departamento::incluaDisciplina(Disciplina* pd) 
{
	ListadeDisciplinas.incluaDisciplina(pd);
}

void Departamento::listedisciplinas()
{
	ListadeDisciplinas.listeDisciplinas();
}


void Departamento::setUnivFiliado(Universidade* universidade)
{
	univFiliado = universidade;
}

void Departamento::informa()
{
	cout << "O departamento " << getNome() << " esta filiado a universidade "
		<< univFiliado->getNome() << endl;
}

#include "Departamento.h" 
#include "Disciplina.h"
#include "ElDisciplina.h"
#include <string.h>
 
Departamento::Departamento()
{
	strcpy(nome, "");
	univFiliado = NULL;
}

Departamento::Departamento(int nd, char* c)
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

void Departamento::setUnivFiliado(Universidade* universidade)
{
	univFiliado = universidade;
}

void Departamento::informa()
{
	cout << "O departamento " << getNome() << " esta filiado a universidade "
		<< univFiliado->getNome() << endl;
}

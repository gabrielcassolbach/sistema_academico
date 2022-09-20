#include "Universidade.h"
#include "Departamento.h"
#include "ElDepartamento.h"
#include <string.h>
 
Universidade::Universidade()
{
	strcpy(nome, "");
}


Universidade::Universidade(char* c)
{
	strcpy(nome, c);
}

Universidade::~Universidade()
{
	//
}

void Universidade::setNome(const char* name)
{
	strcpy(nome, name);
}

char* Universidade::getNome()
{
	return nome;
}

void Universidade::setDptosFiliados(Departamento* departamento)
{
	LUnivDep.incluaDepartamento(departamento);
}

#include "ElDisciplina.h"
#include "Disciplina.h"
#include <string.h>

ElDisciplina::ElDisciplina()
{
	pD = NULL;
	pProx = NULL;
	pAtras = NULL;
}

ElDisciplina::~ElDisciplina()
{
	pD = NULL;
	pProx = NULL;
	pAtras = NULL;
}

void ElDisciplina::setDisciplina(Disciplina* pd)
{
	pD = pd;
}

Disciplina* ElDisciplina::getDisciplina()
{
	return pD;
}

char* ElDisciplina::getNome()
{
	return pD->getNome();
}

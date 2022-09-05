#include "ElAluno.h"

ElAluno::ElAluno()
{
	pAl = NULL;
	pProx = NULL;
	pAtras = NULL;
}

ElAluno::~ElAluno()
{
	pAl = NULL;
	pProx = NULL;
	pAtras = NULL;
}

void ElAluno::setAluno(Aluno* pa)
{
	pAl = pa;
}

Aluno* ElAluno::getAluno() 
{
	return pAl;
}

char* ElAluno::getNome()
{
	return pAl->getNome();
}

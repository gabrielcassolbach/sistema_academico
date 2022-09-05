#pragma once
#include "Aluno.h"

class ElAluno
{
private:
	Aluno* pAl;

public:
	ElAluno* pProx;
	ElAluno* pAtras;

public:
	ElAluno();
	~ElAluno();

	void setAluno(Aluno* pa);
	Aluno* getAluno();
	char* getNome();
};
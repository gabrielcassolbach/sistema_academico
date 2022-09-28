#pragma once
#include "Pessoa.h"

class Aluno : public Pessoa
{
private:
	int RA;

public:
	Aluno();	
	Aluno(int diaNa, int mesNa, int anoNa, char* nome);
	~Aluno();

	void informa();
	void setRa(int registro);
	int getRa();
};
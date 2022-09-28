#include "stdafx.h"
#include "Aluno.h"

Aluno::Aluno(int diaNa, int mesNa, int anoNa, char* nome) :
Pessoa(diaNa, mesNa, anoNa, nome)
{
	RA = 0;
}

Aluno::Aluno() :
Pessoa()
{
	RA = 0;
}

Aluno::~Aluno()
{
}

void Aluno::setRa(int registro)
{
	RA = registro;
}

void Aluno::informa() 
{
	cout << "a idade de " << getNome() << " eh " << getIdade()
		<< ", RA: " << getRa() << endl;
}

int Aluno::getRa()
{
	return RA;
}

#pragma once

class Disciplina;

class ElDisciplina
{
private:
	Disciplina* pD;

public:
	ElDisciplina* pProx; // refazer com o ponteiro privado.
	ElDisciplina* pAtras; // refazer com o ponteiro privado.

public:
	ElDisciplina();
	~ElDisciplina();

	void setDisciplina(Disciplina* pd);
	Disciplina* getDisciplina();
	char* getNome();
};
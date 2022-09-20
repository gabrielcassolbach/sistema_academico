#pragma once

class Disciplina;

class ElDisciplina
{
private:
	Disciplina* pD;

public:
	ElDisciplina* pProx; // refazer utilizando um gabarito (template) -> para Elemento.
	ElDisciplina* pAtras; // refazer utilizando um gabarito (template) -> para Elemento.

public:
	ElDisciplina();
	~ElDisciplina();

	void setDisciplina(Disciplina* pd);
	Disciplina* getDisciplina();
	char* getNome();
};
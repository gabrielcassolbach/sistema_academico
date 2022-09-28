#include "stdafx.h"
#include "Disciplina.h"

Disciplina::Disciplina()
{
	num_alunos = 0; contador_alunos = 0;
	strcpy(nome, "");
}

Disciplina::Disciplina(int na, char* c)
{
	num_alunos = 45; contador_alunos = 0;
	strcpy(nome, c);
}

Disciplina::~Disciplina()
{
}

void Disciplina::setNome(char* name)
{
	strcpy(nome, name);
}

char* Disciplina::getNome()
{
	return nome;
}


void Disciplina::setId(int i)
{
	id = i;
}

int Disciplina::getId()
{
	return id;
}

void Disciplina::incluaAluno(Aluno* pa)
{
	LAlunos.incluaAluno(pa);
}

void Disciplina::listeAlunos()
{
	LAlunos.listeAlunos();
}
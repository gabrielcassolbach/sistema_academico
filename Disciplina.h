#pragma once
#include "ListaAlunos.h"

class Disciplina 
{	
private:
	int id;
	char nome[150]; 
	int num_alunos; 
	int contador_alunos;
	ListaAlunos LAlunos;
	
public:
	Disciplina(int na, char* c);
	Disciplina();
	~Disciplina();
	
	void setNome(char* name); 
	char* getNome();
	
	void setId(int i);
	int getId();

	void incluaAluno(Aluno* pa);
	void listeAlunos();
};

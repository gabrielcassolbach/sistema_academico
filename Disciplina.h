#pragma once
#include "Departamento.h"

class Aluno;
class ElAluno;

class Disciplina 
{	
private:
	char nome[150];
	int num_alunos;
	int contador_alunos;
	Departamento* pDptoAssociado;
	ElAluno* pElAlunoAtual; ElAluno* pElAlunoPrim;

public:
	Disciplina();
	~Disciplina();
	void setNome(const char* name); 
	char* getNome();
	void setDepartamento(Departamento* pdpto);
	void incluaAlunos(Aluno *pa);
	void listeAlunos();
};

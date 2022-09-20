#pragma once
#include "Departamento.h"
#include "ListaAlunos.h"

class Aluno;
class ElAluno;
class Departamento;

class Disciplina 
{	
private:
	char nome[150]; int num_alunos; int contador_alunos;
	Departamento* pDptoAssociado;
	ListaAlunos LAlunosDiscpl;
	
public:
	Disciplina();
	Disciplina(int na, char* c);
	~Disciplina();
	void setNome(const char* name); 
	char* getNome();
	void setDepartamento(Departamento* pdpto);
	void setAlunosFiliados(Aluno* pAluno);
};

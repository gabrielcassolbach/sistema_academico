#pragma once
#include "Pessoa.h"
#include "Aluno.h"
#include "Universidade.h"
#include "Disciplina.h"

class Principal
{
private:

	Universidade UTFPR;
	Departamento DAINF; 
	Disciplina COMP1, ALG, COMP2, TEC;
	Aluno Gabriel, Enzo, Ian;

public:
	Principal(); 
	void executar();
};
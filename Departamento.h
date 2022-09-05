#pragma once
#include "Universidade.h"
class Disciplina;

class Departamento
{
private:
	char nome[30];
	Universidade* univFiliado;
	// Vari�veis respons�veis por criar a lista encadeada de Disciplinas.
	Disciplina* pDisciplAtual; // aponta para o �ltimo valor armazenado na lista.
	Disciplina* pDisciplPrim; // aponta para o primeiro valor da lista.

public:
	Departamento();
	Departamento(const char* name);
	~Departamento();

	void setNome(const char* name);
	char* getNome();
	void setUnivFiliado(Universidade* universidade);
	void informa();
	void incluaDisciplina(Disciplina* pd); 
	void listedisciplinas(); 
	void listedisciplinas2(); // de tr�s para frente.
};

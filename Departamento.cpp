#include "Departamento.h" 
#include "Disciplina.h"
#include <string.h>

// OBS: ao incluir o "Departamento.h" eu incluo todos os includes do "Departamento.h".
Departamento::Departamento()
{
	strcpy_s(nome, "");
	univFiliado = NULL;
	pDisciplAtual = NULL;
	pDisciplPrim = NULL;
}

Departamento::Departamento(const char* name)
{
	setNome(name);
}

Departamento::~Departamento()
{
	pDisciplAtual = NULL;
	pDisciplPrim = NULL;
	univFiliado = NULL;
}

void Departamento::setNome(const char* name)
{
	strcpy_s(nome, name);
}

char* Departamento::getNome()
{
	return nome;
}

void Departamento::setUnivFiliado(Universidade* universidade)
{
	univFiliado = universidade;
}

void Departamento::informa()
{
	cout << "O departamento " << getNome() << " esta filiado a universidade "
		<< univFiliado->getNome() << endl;
}

void Departamento::incluaDisciplina(Disciplina* pd) 
{
	if (pDisciplPrim == NULL) {
		pDisciplPrim = pd;
		pDisciplAtual = pd;
	}
	else{
		pDisciplAtual->pProx = pd; // tornar pProx público e criar função set e get.
		pd->pAtras = pDisciplAtual; //"Encadeamento duplo."
		pDisciplAtual = pd;
	}	
}

void Departamento::listedisciplinas()
{
	Disciplina* pAux = pDisciplPrim;
	while (pAux != NULL) {
		cout << "A disciplina " << pAux->getNome() 
			<< " pertence ao departamento " << getNome() << endl;
		pAux = pAux->pProx;
	}
}

void Departamento::listedisciplinas2()
{
	Disciplina* pAux = pDisciplAtual;
	while (pAux != NULL) {
		cout << "A disciplina " << pAux->getNome()
			<< " pertence ao departamento " << getNome() << endl;
		pAux = pAux->pAtras;
	}
}
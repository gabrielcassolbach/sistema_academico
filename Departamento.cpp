#include "Departamento.h" 
#include "Disciplina.h"
#include "ElDisciplina.h"
#include <string.h>

Departamento::Departamento()
{
	strcpy_s(nome, "");
	univFiliado = NULL;
	pElDiscipAtual = NULL;
    pElDiscipPrim = NULL;
}

Departamento::Departamento(const char* name)
{
	setNome(name);
}

Departamento::~Departamento()
{
	univFiliado = NULL;
	pElDiscipAtual = NULL;
	pElDiscipPrim = NULL;
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
	ElDisciplina* paux = NULL; 
	paux = new ElDisciplina(); 
	paux->setDisciplina(pd); // Ligação entre o objeto e a disciplina.

	if (pElDiscipPrim == NULL) {
		pElDiscipAtual = paux;
		pElDiscipPrim = paux;
	}
	else {
		pElDiscipAtual -> pProx = paux; // Ligação com o próximo.
		paux->pAtras = pElDiscipAtual;
		pElDiscipAtual = paux;		
	}
}

void Departamento::listedisciplinas()
{
	ElDisciplina* paux;
	paux = pElDiscipPrim;
	while (paux != NULL) {
		cout << "Disciplina: " << paux->getNome() 
			<<  " departamento " << getNome() << endl;
		paux = paux->pProx;
	}
}

#include "Universidade.h"
#include "Departamento.h"
#include "ElDepartamento.h"
#include <string.h>

Universidade::Universidade()
{
	strcpy_s(nome, "");
	for (int i = 0; i < 50; i++) pDptos[i] = NULL;
	pDepAtual = NULL;
	pDepPrim = NULL;
}

Universidade::~Universidade()
{
	for (int i = 0; i < 50; i++) pDptos[i] = NULL;
	pDepAtual = NULL;
	pDepPrim = NULL;
}

void Universidade::setNome(const char* name)
{
	strcpy_s(nome, name);
}

char* Universidade::getNome()
{
	return nome;
}

void Universidade::setDptosFiliados(Departamento* departamento, int i)
{
	pDptos[i - 1] = departamento;
}

void Universidade::informa(int j)
{	
	cout << " O nome da universidade eh: " << getNome() << endl;
	cout << " Os departamentos filiados a universidade sao: ";
	for (int i = 0; i < j; i++) cout << pDptos[i]->getNome() << endl; 
}

void Universidade::incluaDepartamentos(Departamento* pdep)
{
	ElDepartamento* paux = NULL;
	paux = new ElDepartamento();
	paux->setDepartamento(pdep);

	if (pDepPrim == NULL) {
		pDepPrim = paux;
		pDepAtual = paux;
	}else{
		pDepAtual->pProx = paux;
		paux->pAtras = pDepAtual;
		pDepAtual = paux;
	}
}

void Universidade::listaDepartamentos()
{
	ElDepartamento* paux = NULL;
	paux = pDepPrim;
	while (paux != NULL) {
		cout << "Departamento " << paux->getNome()
			<< " filiado a universidade" << getNome() << endl;
		paux = paux->pProx;
	}
}
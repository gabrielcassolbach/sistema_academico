#include "Universidade.h"
#include "Departamento.h"
#include "ElDepartamento.h"
#include <string.h>
 
Universidade::Universidade()
{
	strcpy(nome, "");
	for (int i = 0; i < 50; i++) pDptos[i] = NULL;
}


Universidade::Universidade(int nd, char* c)
{
	strcpy(nome, "");
	for (int i = 0; i < 50; i++) pDptos[i] = NULL;
}

Universidade::~Universidade()
{
	for (int i = 0; i < 50; i++) pDptos[i] = NULL;
}

void Universidade::setNome(const char* name)
{
	strcpy(nome, name);
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
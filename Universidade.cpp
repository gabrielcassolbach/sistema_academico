#include "Universidade.h"
#include "Departamento.h"
#include <string.h>

Universidade::Universidade()
{
	strcpy_s(nome, "");
	for (int i = 0; i < 50; i++) pDptos[i] = NULL;
}

Universidade::~Universidade()
{
	for (int i = 0; i < 50; i++) pDptos[i] = NULL;
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
	for (int i = 0; i < j; i++) cout << pDptos[i]->getNome() << endl; // Aqui está o problema.
}

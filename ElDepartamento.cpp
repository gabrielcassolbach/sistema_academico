#include "ElDepartamento.h"
#include "Departamento.h"
#include <string.h>

ElDepartamento::ElDepartamento()
{
	pDep = NULL;
	pProx = NULL;
	pAtras = NULL;
}

ElDepartamento::~ElDepartamento()
{
	pDep = NULL;
	pProx = NULL;
	pAtras = NULL;
}

void ElDepartamento::setDepartamento(Departamento* pdep)
{
	pDep = pdep;
}

char* ElDepartamento::getNome()
{
	return pDep->getNome();
}

Departamento* ElDepartamento::getDepartamento()
{
	return pDep;
}


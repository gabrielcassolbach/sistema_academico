#include "stdafx.h"
#include "Professor.h"

Professor::Professor(int dia, int mes, int ano, char* nome):
Pessoa(dia, mes, ano, nome)
{
    salario = 0; bolsa_projeto = 0;
}

Professor::Professor():
Pessoa()
{
    salario = 0; bolsa_projeto = 0;
}

Professor::~Professor()
{
    salario = 0; bolsa_projeto = 0;
}

void Professor::setProventos(int s, int b)
{
    salario = s; bolsa_projeto = b;
}

int Professor::getProventos()
{
    return salario + bolsa_projeto;
}
#include "stdafx.h"
#include "Estagiario.h"

Estagiario::Estagiario(int dia, int mes, int ano, char* nome):
Aluno(dia, mes, ano, nome)
{
    bolsa_estudo = 0;
}

Estagiario::Estagiario():
Aluno()
{
    bolsa_estudo = 0;
}

Estagiario::~Estagiario()
{
    bolsa_estudo = 0;
}

void Estagiario::setProventos(float be)
{
    bolsa_estudo = be;
}

float Estagiario::getProventos()
{
    return bolsa_estudo;
}
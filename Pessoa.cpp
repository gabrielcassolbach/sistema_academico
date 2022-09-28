#include "stdafx.h"
#include "Pessoa.h"

Pessoa::Pessoa()
{
	inicializa(0, 0, 0, "");
}

Pessoa::~Pessoa()
{
}

Pessoa::Pessoa(int dia, int mes, int ano, const char* nome)
{
	inicializa(dia, mes, ano, nome);
}

void Pessoa::inicializa(int dia, int mes, int ano, const char* nome)
{
	diaP = dia;
	mesP = mes;
	anoP = ano;
	idadeP = 0;
	strcpy(nomeP, nome);
}

void Pessoa::calc_idade(int diaAT, int mesAT, int anoAT)
{
	if ((mesAT < mesP) || ((mesP == mesAT) && (diaAT < diaP)))
		idadeP = anoAT - anoP - 1;
	else
		idadeP = anoAT - anoP;
}

int Pessoa::getIdade()
{
	return idadeP;
}

char* Pessoa::getNome()
{
	return nomeP;
}


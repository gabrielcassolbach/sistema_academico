#include "ElUniversidade.h"
#include "Universidade.h"

ElUniversidade::ElUniversidade()
{
    pUniv = NULL;
    pProx = NULL;
    pAtras = NULL;
}

ElUniversidade::~ElUniversidade()
{
    pUniv = NULL;
    pProx = NULL;
    pAtras = NULL;
}

void ElUniversidade::setUniv(Universidade* univ)
{
    pUniv = univ;    
}

Universidade* ElUniversidade::getUniv()
{
   return pUniv;
}

char* ElUniversidade::getNome()
{
    return pUniv -> getNome();    
}
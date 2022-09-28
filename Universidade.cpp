#include "Universidade.h"

Universidade::Universidade()
{
    //empty!
}

Universidade::~Universidade()
{
    LDepartamentos.limpaLista();
}

void Universidade::setNome(char* name)
{
    strcpy(nome, name);
}

char* Universidade::getNome()
{
    return nome;
}
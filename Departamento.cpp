#include "Departamento.h"

Departamento::Departamento()
{
    // Empty!
}

Departamento::~Departamento()
{
    LDisciplinas.limparLista();
}

void Departamento::setNome(char* name)
{
    strcpy(nome, name);
}

char* Departamento::getNome()
{
    return nome;
}

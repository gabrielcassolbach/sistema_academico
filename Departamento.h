#pragma once
#include "ListaDisciplinas.h"

class Departamento
{
private:
    char nome[30];
    ListaDisciplinas LDisciplinas;

public:
    Departamento();
    ~Departamento();

    void setNome(char* name);
    char* getNome();

};




#pragma once
#include "stdafx.h"
#include "ListaDepartamentos.h"

class Universidade
{
private:
    char nome[150];
    ListaDepartamentos LDepartamentos;

public:
    Universidade();
    ~Universidade();

    void setNome(char* name);
    char* getNome();
};
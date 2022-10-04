#pragma once
#include "stdafx.h"
#include "Lista.h"
#include "Departamento.h"

class ListaDepartamentos
{
private:
    Lista<Departamento> LDepartamentos;

public:
    ListaDepartamentos();
    ~ListaDepartamentos();

    void limpaLista();
    void incluaDepartamento(Departamento* pd);

    void listeDepartamentos();
    void deleteDepartamentos();

    Departamento* localizar(char* n);
};

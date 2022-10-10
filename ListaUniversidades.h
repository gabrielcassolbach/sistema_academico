#pragma once
#include "Lista.h"
#include "Universidade.h"

class ListaUniversidades
{
private:
    Lista<Universidade> LUniversidade;

public:
    ListaUniversidades();
    ~ListaUniversidades();

    void limparLista();
    void incluaUniversidade(Universidade* pu);

    void listeUniversidades();
    void deleteUniversidades();

    Universidade* localizar(char* n);
};

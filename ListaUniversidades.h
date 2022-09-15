#pragma once
#include <iostream>
using namespace std;

#include "ElUniversidade.h"

class ListaUniversidades
{
private:
    char nome[150]; 
    int contador_univ; int num_univ;

public:
    ElUniversidade* pElUniversidadePrim;
    ElUniversidade* pElUniversidadeAtual;

public:
    ListaUniversidades(const char* c = "");
    ~ListaUniversidades();
    void inicializa();
    void incluaUniversidade(Universidade* puniv);
    void listeUniversidades();    
    Universidade* localizar(char* n);
};
#pragma once
#include "stdafx.h"
#include "Lista.h"
#include "Disciplina.h"

class ListaDisciplinas
{
private:
    Lista <Disciplina> LDisciplinas;

public:
    ListaDisciplinas();
    ~ListaDisciplinas();

    void limparLista();
    void incluaDisciplina(Disciplina* pd);
    
    void listeDisciplinas();
};
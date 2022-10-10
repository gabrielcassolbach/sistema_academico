#pragma once
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
    void deleteDisciplinas();

    Disciplina* localizar(char* n);
};
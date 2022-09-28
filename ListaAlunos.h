#pragma once
#include "Lista.h"
#include "Aluno.h"

class ListaAlunos
{
private:
    Lista<Aluno> LAlunos;    

public:
    ListaAlunos();
    ~ListaAlunos();

    void limpaLista();
    void incluaAluno(Aluno* pa);
    
    void listeAlunos();
    void deleteAlunos();
};
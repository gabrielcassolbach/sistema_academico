#pragma once
#include <iostream>
using namespace std;

#include "ElAluno.h"
#include "Aluno.h"
 
class ListaAlunos
{
private:
    int contador_alunos; int num_alunos;
    char nome[150];

public:
    ElAluno* pElAlunoPrim;
    ElAluno* pElAlunoAtual;

public:
    ListaAlunos();
    ListaAlunos (int na, char* n);
    ~ListaAlunos ();
    void inicializa();
    void incluaAluno(Aluno* pa);
    void listeAlunos();
};
#pragma once
#include <iostream>
using namespace std;

class ElDisciplina;
class Disciplina;

class ListaDisciplinas
{
private: 
    int contadorDisciplinas; int num_disciplinas;
    char nome[150];

public:
    ElDisciplina* pElDisciplinaPrim;
    ElDisciplina* pElDisciplinaAtual;

public:
    ListaDisciplinas();
    ListaDisciplinas(int nd, char* c);
    ~ListaDisciplinas();
    void inicializa();
    void incluaDisciplina(Disciplina* pd);
    void listeDisciplinas();
    Disciplina* localizar(char* n);
};

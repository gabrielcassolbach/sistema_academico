#pragma once
#include "Lista.h"
#include "Professor.h"
 
class ListaProfessores
{
private:
    Lista<Professor> LProfessores;

public:
    ListaProfessores();
    ~ListaProfessores();

    void limpaLista();
    void incluaProfessor(Professor* pa);
    
    void listeProfessores();
    void deleteProfessores();
};
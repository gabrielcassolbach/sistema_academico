#pragma once
#include <iostream>
using namespace std;

class Departamento;
class ElDepartamento;

class ListaDepartamentos
{
private:
    char nome[150]; 
    int num_departamentos; int cont_departamentos;

public:
    ElDepartamento* pElDepartamentoPrim;
    ElDepartamento* pElDepartamentoAtual;

public:
    ListaDepartamentos();
    ListaDepartamentos(int nd, char* c);
    ~ListaDepartamentos();
    void inicializa();
    void incluaDepartamento(Departamento *pd);
    void listeDepartamentos();
    Departamento* localizar(char* n);
};
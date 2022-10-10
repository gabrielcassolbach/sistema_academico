#pragma once
#include "Pessoa.h"

class Professor : public Pessoa
{
private:
    int salario, bolsa_projeto;

public:
    Professor(int dia, int mes, int ano, char* nome);
    Professor();
    ~Professor();

    void setProventos(int s, int b);
    int getProventos();

};
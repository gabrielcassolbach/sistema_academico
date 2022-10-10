#pragma once
#include "Aluno.h"

class Estagiario : public Aluno
{
private:
    float bolsa_estudo;

public:
    Estagiario(int dia, int mes, int ano, char* nome);
    Estagiario();
    ~Estagiario();

    void setProventos(float be);
    float getProventos();
};
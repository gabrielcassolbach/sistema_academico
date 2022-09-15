#pragma once
#include <iostream>
using namespace std;

class Universidade;

class ElUniversidade
{
private:
    Universidade* pUniv;

public:
    ElUniversidade* pProx;
    ElUniversidade* pAtras;
public:
    ElUniversidade();
    ~ElUniversidade();
    void setUniv(Universidade* univ);
    Universidade* getUniv();
    char* getNome();
};
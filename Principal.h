#pragma once
#include "stdafx.h"
#include "ListaAlunos.h"
#include "ListaDepartamentos.h"
#include "ListaDepartamentos.h"
#include "ListaUniversidades.h"

class Principal
{
private: 
    ListaAlunos LAlunos;

public:
    Principal();
    ~Principal();
    void executar();
    // Métodos responsáveis por cadastrar os objetos.
    void cadastreAlunos();
    void cadastreDisciplinas();
    void cadastreDepartamentos(){} 
    void cadastreUniversidades(){} 
    // Métodos responsáveis pelo menu do Sistema Acadêmico.
    void Menu();
    void MenuCadastro();
    void MenuExe();
};
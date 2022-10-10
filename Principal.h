#pragma once
#include "ListaPessoas.h"
#include "ListaAlunos.h"
#include "ListaEstagiarios.h"
#include "ListaProfessores.h"
#include "ListaDisciplinas.h"
#include "ListaDepartamentos.h"
#include "ListaUniversidades.h"
 
class Principal
{
private:
    ListaPessoas        LPessoas;
    ListaAlunos         LAlunos;
    ListaEstagiarios    LEstagiarios;
    ListaProfessores    LProfessores;
    ListaDisciplinas    LDisciplinas;
    ListaDepartamentos  LDepartamentos;
    ListaUniversidades  LUniversidades;
     
public:
    Principal();
    ~Principal();
    void executar();
    // Métodos responsáveis por cadastrar os objetos.
    void cadastreAlunos();
    void cadastreEstagiarios();
    void cadastreProfessores();
    void cadastreDisciplinas();
    void cadastreDepartamentos();
    void cadastreUniversidades(); 
    // Métodos responsáveis pelo menu do Sistema Acadêmico.
    void menu();
    void registrar();
    void listar();
};

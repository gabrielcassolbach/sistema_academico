#pragma once
#include <iostream>
#include "ListaAlunos.h"
#include "ListaDisciplinas.h"
#include "ListaDepartamentos.h"
#include "ListaUniversidades.h"
using namespace std;

// Só desaloque os alunos uma vez. -> analisar bem esse código!..Revisão! 

class Principal
{
private:
	ListaAlunos LAlunos;
	ListaDisciplinas LDisciplinas;
	ListaDepartamentos LDepartamentos;
	ListaUniversidades LUniversidades;
public:
	Principal(); 
	~Principal();
	void executar();
	// Métodos responsáveis por inicializar os objetos.
	void Inicializa();
	// Métodos responsáveis por imprimir as listas de objetos.
	void ListeDepartamentosUniversidade();
	void ListeDisciplinasDepartamento();
	void ListeAlunosDisciplina();
	// Métodos responsáveis por inicializar as relações dos objetos nas listas.
	void InicializaLDepartamentos();
	void InicializaLDisciplinas();
	void InicializaLAlunos();
	// Métodos responsáveis por cadastrar objetos.
	void CadastreUniversidades();
	void CadastreDepartamentos();
	void CadastreDisciplinas();
	void CadastreAlunos();
	// Métodos responsáveis pelo menu do sistema acadêmico.
	void Menu();
	void MenuCadastro();
	void MenuExe();
};
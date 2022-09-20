#include "Principal.h"
#include "Pessoa.h"
#include "Aluno.h"
#include "Universidade.h"
#include "ElDepartamento.h"
#include "ElDisciplina.h"
#include "Departamento.h"
#include "Disciplina.h"

Principal::Principal()
{
	LAlunos.inicializa();
	LDisciplinas.inicializa();
	LDepartamentos.inicializa();
	LUniversidades.inicializa();
}

void Principal::executar()
{
	Menu();
}

Principal::~Principal()
{
	deleteAlunos();
	deleteDepartamentos();
	deleteDisciplinas();
	deleteUniversidades();
}

void Principal::CadastreUniversidades()
{
	char nomeUniv[150];
	Universidade *pUniv = NULL;
	cout << "Universidade " << endl;
	cin >> nomeUniv;
	pUniv = new Universidade(); 
	pUniv->setNome(nomeUniv);
	LUniversidades.incluaUniversidade(pUniv);
}

void Principal::CadastreDepartamentos()
{
	char nomeUniversidade[150];
	char nomeDepartamento[150];
	Departamento *pDep = NULL;
	Universidade *pUniv = NULL;
	cout << "Universidade do Departamento: " << endl;
	cin >> nomeUniversidade;
	pUniv = LUniversidades.localizar(nomeUniversidade);
	if (pUniv != NULL)
	{
		cout << "Departamento: " << endl;
		cin >> nomeDepartamento;
		pDep = new Departamento(); 
		pDep->setNome(nomeDepartamento);
		pDep->setUnivFiliado(pUniv);
		LDepartamentos.incluaDepartamento(pDep);
		pUniv->setDptosFiliados(pDep);
	}
	else
	{
		cout << "Universidade inexistente" << endl;
		getchar();
	}
}

void Principal::CadastreDisciplinas()
{
	char nomeDepartamento[150];
	char nomeDisciplina[150];
	Departamento *pDep = NULL;
	Disciplina *pDiscp = NULL;
	cout << "Departamento da Disciplina: " << endl;
	cin >> nomeDepartamento;
	pDep = LDepartamentos.localizar(nomeDepartamento);
	if (pDep != NULL)
	{
		cout << "Disciplina: " << endl;
		cin >> nomeDisciplina;
		pDiscp = new Disciplina();
		pDiscp->setNome(nomeDisciplina);
		pDiscp->setDepartamento(pDep);
		LDisciplinas.incluaDisciplina(pDiscp);
	}
	else
	{
		cout << "Departamento Inexistente." << endl;
		getchar();
	}
}

void Principal::CadastreAlunos()
{
	char nomeAluno[150];
	Aluno *pAluno = NULL;
	int dia, mes, ano, RA;
	char nomeDisciplina[150];
	Disciplina *pDiscp = NULL;
	cout << "Disciplina cursada pelo aluno: " << endl;
	cin >> nomeDisciplina;
	pDiscp = LDisciplinas.localizar(nomeDisciplina);
	if (pDiscp != NULL)
	{
		cout << "Entre com a data de Nascimento, RA e nome do aluno: " << endl;
		cin >> dia >> mes >> ano >> RA >> nomeAluno;
		pAluno = new Aluno();
		pAluno->inicializa(dia, mes, ano, nomeAluno);
		pAluno->setRa(RA);
		LAlunos.incluaAluno(pAluno);
	}
	else
	{
		cout << "Departamento Inexistente." << endl;
		getchar();
	}
}

void Principal::deleteAlunos()
{
	ElAluno *paux1 = LAlunos.pElAlunoPrim; ElAluno *paux2 = paux1;
    while (paux1 != NULL){
        paux2 = paux1->pProx;
        delete (paux1 -> getAluno());
        paux1 = paux2;
	}
	// ok!
}

void Principal::deleteDepartamentos()
{
	ElDepartamento *paux1 = LDepartamentos.pElDepartamentoPrim; ElDepartamento *paux2 = paux1;
    while (paux1 != NULL){
        paux2 = paux1->pProx;
        delete (paux1 -> getDepartamento());
        paux1 = paux2;
	}
	// ok!
}

void Principal::deleteUniversidades()
{
	ElUniversidade *paux1 = LUniversidades.pElUniversidadePrim; ElUniversidade *paux2 = paux1;
    while (paux1 != NULL){
        paux2 = paux1->pProx;
        delete (paux1 -> getUniv());
        paux1 = paux2;
	}
	// ok!
}

void Principal::deleteDisciplinas()
{
	ElDisciplina *paux1 = LDisciplinas.pElDisciplinaPrim; ElDisciplina *paux2 = paux1;
    while (paux1 != NULL){
        paux2 = paux1->pProx;
        delete (paux1 -> getDisciplina());
        paux1 = paux2;
	}
	// ok!
}

void Principal::Menu()
{
	int option = -1;
	while (option != 3)
	{
		system("clear");
		cout << "Informe sua opção:		" << endl;
		cout << "1 - Cadastrar.			" << endl;
		cout << "2 - Executar.			" << endl;
		cout << "3 - Sair.				" << endl;
		cin >> option;

		switch (option)
		{
		case 1:
		{
			MenuCadastro();
		}
		break;
		case 2:
		{
			MenuExe();
		}
		break;
		case 3:
		{
			cout << "Fim!" << endl;
		}
		break;
		default:
		{
			cout << "ERROR!" << endl;
			getchar();
		}
		break;
		}
	}
	return;
}

void Principal::MenuCadastro()
{
	int option = -1;

	while (option != 5)
	{
		system("clear");
		cout << "Informe sua opção: 	  	" << endl;
		cout << "1 - Cadastrar Alunos	 	" << endl;
		cout << "2 - Cadastrar Disciplinas	" << endl;
		cout << "3 - Cadastrar Departamentos" << endl;
		cout << "4 - Cadastrar Universidades" << endl;
		cout << "5 - Sair					" << endl;
		cin >> option;

		switch (option)
		{
		case 1:
		{
			CadastreAlunos();
		}
		break;
		case 2:
		{
			CadastreDisciplinas();
		}
		break;
		case 3:
		{
			CadastreDepartamentos();
		}
		break;
		case 4:
		{
			CadastreUniversidades();
		}
		break;
		case 5:
		{
			cout << "Fim" << endl;
		}
		break;
		default:
		{
			cout << "Opção Inválida" << endl;
			getchar();
		}
		break;
		}
	}
	return;
}

void Principal::MenuExe()
{
	int option = -1;

	while (option != 5)
	{
		system("clear");
		cout << "Informe sua opção: 	  	" << endl;
		cout << "1 - Listar Alunos		 	" << endl;
		cout << "2 - Listar Disciplinas		" << endl;
		cout << "3 - Listar Departamentos 	" << endl;
		cout << "4 - Listar Universidades 	" << endl;
		cout << "5 - Sair					" << endl;
		cin >> option;

		switch (option)
		{
		case 1:
		{
			LAlunos.listeAlunos();
			fflush(stdin);
			getchar();
		}
		break;
		case 2:
		{
			LDisciplinas.listeDisciplinas();
			fflush(stdin);
			getchar();
		}
		break;
		case 3:
		{
			LDepartamentos.listeDepartamentos();
			fflush(stdin);
			getchar();
		}
		break;
		case 4:
		{
			LUniversidades.listeUniversidades();
			fflush(stdin);
			getchar();
		}
		break;
		case 5:
		{
			cout << "Fim" << endl;
		}
		break;
		default:
		{
			cout << "Opção Inválida" << endl;
			getchar();
		}
		}
	}
	return;
}
#include "Principal.h"

Principal::Principal()
{
}

Principal::~Principal()
{
    LAlunos.deleteAlunos();
    LDisciplinas.deleteDisciplinas();
    LDepartamentos.deleteDepartamentos();
    LUniversidades.deleteUniversidades();
}

void Principal::executar()
{
    menu();
}

// Métodos responsáveis por cadastrar os objetos.
void Principal::cadastreUniversidades()
{
	char nomeUniv[150]; Universidade *pUniv = NULL;
	cout << "Universidade " << endl;
	cin >> nomeUniv;
	pUniv = new Universidade(); 
	pUniv->setNome(nomeUniv);
	LUniversidades.incluaUniversidade(pUniv);
}

void Principal::cadastreDepartamentos()
{
	char nomeUniv[150]; char nomeDep[150];
	Departamento *pDep = NULL; Universidade *pUniv = NULL;
	cout << "Universidade do Departamento: " << endl;
	cin >> nomeUniv;
	pUniv = LUniversidades.localizar(nomeUniv);
	if (pUniv != NULL)
	{
		cout << "Departamento: " << endl;
		cin >> nomeDep;
		pDep = new Departamento(); 
		pDep -> setNome(nomeDep);
		LDepartamentos.incluaDepartamento(pDep);
	}
	else
	{
		cout << "Universidade inexistente" << endl;
		getchar();
	}
}

void Principal::cadastreDisciplinas()
{
	char nomeDep[150]; char nomeDiscip[150];
	Departamento *pDep = NULL; Disciplina *pDiscp = NULL;
	cout << "Departamento da Disciplina: " << endl;
	cin >> nomeDep;
	pDep = LDepartamentos.localizar(nomeDep);
	if (pDep != NULL)
	{
		cout << "Disciplina: " << endl;
		cin >> nomeDiscip;
		pDiscp = new Disciplina();
		pDiscp->setNome(nomeDiscip);
		LDisciplinas.incluaDisciplina(pDiscp);
	}
	else
	{
		cout << "Departamento Inexistente." << endl;
		getchar();
	}
}

void Principal::cadastreAlunos()
{
	char nomeAluno[150]; Aluno *pAluno = NULL;
	int dia, mes, ano, RA; char nomeDiscip[150];
	Disciplina *pDiscp = NULL;
	cout << "Disciplina cursada pelo aluno: " << endl;
	cin >> nomeDiscip;
	pDiscp = LDisciplinas.localizar(nomeDiscip);
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

// Métodos responsáveis pelo menu do Sistema Acadêmico.
void Principal::menu()
{
    int option = -1;
    while(option != 3)
    {
        system("clear");
        cout << "choose option: " << endl;
        cout << "1 - register.  " << endl;
        cout << "2 - execute.   " << endl;
        cout << "3 - close.     " << endl;
        cin >> option;

        switch(option)
        {
            case 1: {registrar();}
            break;
        
            case 2: {listar();}
            break;

            case 3: {cout << "Fim!" << endl;}
            break;

            default: {cout << "ERROR!" << endl; getchar();}
            break;
        }
    }
}

void Principal::registrar()
{
    int option = -1;
    
    while(option != 5)
    {
        system("clear");
        cout << "choose option: " << endl;
        cout << "1 - register students.    " << endl;
        cout << "2 - register disciplines. " << endl;
        cout << "3 - register departments. " << endl;
        cout << "4 - register universities. " << endl;
        cout << "5 - back. " << endl;
        cin >> option;

        switch(option)
        {
            case 1: {cadastreAlunos();}
            break;
        
            case 2: {cadastreDisciplinas();}
            break;

            case 3: {cadastreDepartamentos();}
            break;
        
            case 4: {cadastreUniversidades();}
            break;

            case 5: {cout << "Fim!" << endl; getchar();}
            break;

            default: {cout << "ERROR!" << endl; getchar();}
            break;
        }
    }
}

void Principal::listar()
{
    int option = -1;
    
    while(option != 5)
    {
        system("clear");
        cout << "choose option: " << endl;
        cout << "1 - list students.     " << endl;
        cout << "2 - list disciplines.  " << endl;
        cout << "3 - list departments.  " << endl;
        cout << "4 - list universities. " << endl;
        cout << "5 - back. " << endl;
        cin >> option;

        switch(option)
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
            {   LUniversidades.listeUniversidades();
                fflush(stdin);
                getchar();
            }
            break;

            case 5: {cout << "Fim!" << endl;}
            break;

            default: {cout << "ERROR!" << endl; getchar();}
            break;
        }
    }
}
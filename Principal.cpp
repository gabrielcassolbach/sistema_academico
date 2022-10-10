#include "stdafx.h"
#include "Principal.h"

Principal::Principal()
{

}

Principal::~Principal()
{
    LAlunos.deleteAlunos();
    LProfessores.deleteProfessores();
    LDisciplinas.deleteDisciplinas();
    LDepartamentos.deleteDepartamentos();
    LUniversidades.deleteUniversidades();
}

void Principal::executar()
{
    menu();
}

/*---------------------------------------------------------------------------------*/
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
 
void Principal::cadastreProfessores()
{
    char nomeProf[150];  int dia, mes, ano;
    float salario, bolsa; 

    Professor* pProf = NULL; Pessoa* pPessoa;

    cout << "Entre com a data de Nascimento e o nome do Professor: " << endl;
	cin >> dia >> mes >> ano >> nomeProf;

    cout << "Entre com o valor do salario e da bolsa do professor " << endl;
    cin >> salario >> bolsa;

    pProf = new Professor(); 
	pProf -> inicializa(dia, mes, ano, nomeProf);
    pProf -> setProventos(salario, bolsa);

    LProfessores.incluaProfessor(pProf);

    pPessoa = static_cast <Pessoa*> (pProf);
    LPessoas.incluaPessoa(pPessoa);
}

void Principal::cadastreEstagiarios()
{
    char nomeEstagiario[150]; int dia, mes, ano; float bolsa;
    Pessoa* pPessoa; Estagiario* pEstagiario;

    cout << "Entre com a data de Nascimento e o nome do Estagiario: " << endl;
	cin >> dia >> mes >> ano >> nomeEstagiario;

    cout << "Entre com o valor da bolsa do estagiário " << endl;
    cin >> bolsa; 

    pEstagiario = new Estagiario(); 
	pEstagiario -> inicializa(dia, mes, ano, nomeEstagiario);
	pEstagiario -> setProventos(bolsa);

    LEstagiarios.incluaEstagiario(pEstagiario);

    pPessoa = static_cast <Pessoa*> (pEstagiario);
    LPessoas.incluaPessoa(pPessoa);
}

void Principal::cadastreAlunos()
{
	char nomeAluno[150]; char nomeDiscip[150]; int dia, mes, ano, RA; 
	Disciplina* pDiscp = NULL; Aluno* pAluno = NULL; Pessoa* pPessoa;
	
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

        pPessoa = static_cast <Pessoa*> (pAluno);
        LPessoas.incluaPessoa(pPessoa);
	}
	else
	{
		cout << "Departamento Inexistente." << endl;
		getchar();
	}
}

/*---------------------------------------------------------------------------------*/
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
    
    while(option != 7)
    {
        system("clear");
        cout << "choose option: " << endl;
        cout << "1 - register students.    " << endl;
        cout << "2 - register interns.    " << endl;
        cout << "3 - register professors.    " << endl;
        cout << "4 - register disciplines. " << endl;
        cout << "5 - register departments. " << endl;
        cout << "6 - register universities. " << endl;
        cout << "7 - back. " << endl;
        cin >> option;

        switch(option)
        {
            case 1: {cadastreAlunos();}
            break;
        
            case 2: {cadastreEstagiarios();}
            break;

            case 3: {cadastreProfessores();}
            break;

            case 4: {cadastreDisciplinas();}
            break;

            case 5: {cadastreDepartamentos();}
            break;
        
            case 6: {cadastreUniversidades();}
            break;

            case 7: {cout << "Fim!" << endl; getchar();}
            break;

            default: {cout << "ERROR!" << endl; getchar();}
            break;
        }
    }
}

void Principal::listar()
{
    int option = -1;
    
    while(option != 8)
    {
        system("clear");
        cout << "choose option: " << endl;
        cout << "1 - list persons.     " << endl;
        cout << "2 - list students.     " << endl;
        cout << "3 - list interns.     " << endl;
        cout << "4 - list professors.     " << endl;
        cout << "5 - list disciplines.  " << endl;
        cout << "6 - list departments.  " << endl;
        cout << "7 - list universities. " << endl;
        cout << "8 - back. " << endl;
        cin >> option;

        switch(option)
        {
            case 1: 
            {
                LPessoas.listePessoas();
                fflush(stdin);
                getchar();
            }
            break;

            case 2: 
            {
                LAlunos.listeAlunos();
                fflush(stdin);
                getchar();
            }
            break;

            case 3: 
            {
                LEstagiarios.listeEstagiarios();
                fflush(stdin);
                getchar();
            }
            break;

            case 4: 
            {
                LProfessores.listeProfessores();
                fflush(stdin);
                getchar();
            }
            break;

            case 5: 
            {
                LDisciplinas.listeDisciplinas();
                fflush(stdin);
                getchar();
            }
            break;

            case 6: 
            {
                LDepartamentos.listeDepartamentos();
                fflush(stdin);
                getchar();
            }
            break;
        
            case 7: 
            {   LUniversidades.listeUniversidades();
                fflush(stdin);
                getchar();
            }
            break;

            case 8: {cout << "Fim!" << endl; getchar();}
            break;

            default: {cout << "ERROR!" << endl; getchar();}
            break;
        }
    }
}
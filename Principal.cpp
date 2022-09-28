#include "Principal.h"

Principal::Principal()
{
}

Principal::~Principal()
{
    LAlunos.deleteAlunos();
    //.. Mesma ideia para o resto!

}

void Principal::executar()
{
    Menu();
}

// Métodos responsáveis por cadastrar os objetos.
void Principal::cadastreAlunos(){} //...
void Principal::cadastreDisciplinas(){} //...
void Principal::cadastreDepartamentos(){} 
void Principal::cadastreUniversidades(){} 
// Métodos responsáveis por deletar os objetos //..

// Métodos responsáveis pelo menu do Sistema Acadêmico.
void Principal::Menu()
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
            case 1: {MenuCadastro();}
            break;
        
            case 2: {MenuExe();}
            break;

            case 3: {cout << "Fim!" << endl;}
            break;

            default: {cout << "ERROR!" << endl; getchar();}
            break;
        }
    }
}

void Principal::MenuCadastro()
{
    int option = -1;
    
    while(option != 5)
    {
        system("clear");
        cout << "choose option: " << endl;
        cout << "1 - list students.    " << endl;
        cout << "2 - list disciplines. " << endl;
        cout << "3 - list departments. " << endl;
        cout << "4 - list universities. " << endl;
        cout << "5 - list departments. " << endl;
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

void Principal::MenuExe()
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
        cout << "5 - list departments.  " << endl;
        cin >> option;

        switch(option)
        {
            case 1: {}
            break;
        
            case 2: {}
            break;

            case 3: {}
            break;
        
            case 4: {}
            break;

            case 5: {cout << "Fim!" << endl;}
            break;

            default: {cout << "ERROR!" << endl; getchar();}
            break;
        }
    }
}
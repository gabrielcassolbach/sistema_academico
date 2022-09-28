#include "stdafx.h"
#include "ListaAlunos.h"

ListaAlunos::ListaAlunos()
{
     // empty!
}

ListaAlunos::~ListaAlunos()
{
    limpaLista();
}

void ListaAlunos::limpaLista()
{
    LAlunos.limpar();
}

void ListaAlunos::incluaAluno(Aluno* pa)
{
    if(pa != NULL){
        LAlunos.incluaObjeto(pa);
    }else{
        cout << "not included student!" << endl;
        cout << "invalid pointer" << endl;
    }
}   

void ListaAlunos::listeAlunos()
{
    Elemento <Aluno>* pElaux = NULL;  Aluno* pAlaux = NULL;
    pElaux = LAlunos.getPrimeiro();
    while (pElaux != NULL)
    {
        pAlaux = pElaux -> getTipo();
        cout << "Aluno " << pAlaux -> getNome()
            << "com RA " << pAlaux -> getRa()
            << "." << endl;
            pElaux = pElaux -> getProximo();
    }
}

void ListaAlunos::deleteAlunos()
{
    LAlunos.deleteObjetos();
}
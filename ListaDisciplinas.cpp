#include "stdafx.h"
#include "ListaDisciplinas.h"
   
ListaDisciplinas::ListaDisciplinas()
{
    //Empty!
}
 
ListaDisciplinas::~ListaDisciplinas()
{
    limparLista();
}

void ListaDisciplinas::limparLista()
{
    LDisciplinas.limpar();
}

void ListaDisciplinas::incluaDisciplina(Disciplina* pd)
{
    if(pd != NULL){
        LDisciplinas.incluaObjeto(pd);
    }else{
        cout << "not included discipline!" << endl;
        cout << "invalid pointer" << endl;
    }    
} 

void ListaDisciplinas::listeDisciplinas()
{
    Elemento<Disciplina>* pElaux = LDisciplinas.getPrimeiro();
    Disciplina* pDaux;
    while(pElaux != NULL){
        pDaux = pElaux -> getTipo();
        cout << "Disciplina: " << pDaux -> getNome() << endl;
        pElaux = pElaux -> getProximo();
    }
} 

void ListaDisciplinas::deleteDisciplinas()
{
    LDisciplinas.deleteObjetos();
}

Disciplina* ListaDisciplinas::localizar(char* n)
{
    return LDisciplinas.localizar(n);   
}
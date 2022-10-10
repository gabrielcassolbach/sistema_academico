#include "stdafx.h"
#include "ListaProfessores.h"
 
ListaProfessores::ListaProfessores()
{
    //Empty!
}

ListaProfessores::~ListaProfessores()
{
    limpaLista();
}

void ListaProfessores::limpaLista()
{
    LProfessores.limpar();
}

void ListaProfessores::incluaProfessor(Professor* prof)
{
    if(prof != NULL){
        LProfessores.incluaObjeto(prof);
    }else{
        cout << "not included professor!" << endl;
        cout << "invalid pointer" << endl;
    }
}
    
void ListaProfessores::listeProfessores()
{
    Elemento <Professor>* pElaux = NULL;  Professor* paux = NULL;
    pElaux = LProfessores.getPrimeiro();
    while (pElaux != NULL)
    {
        paux = pElaux -> getTipo();
        cout << "Professor " << paux -> getNome() << endl;
        pElaux = pElaux -> getProximo();
    }
}
   
void ListaProfessores::deleteProfessores()
{
    LProfessores.deleteObjetos();
}

#include "stdafx.h"
#include "ListaUniversidades.h"

ListaUniversidades::ListaUniversidades()
{
    //Empty!
} 

ListaUniversidades::~ListaUniversidades()
{
    limparLista();
}

void ListaUniversidades::limparLista()
{
    LUniversidade.limpar();
}

void ListaUniversidades::incluaUniversidade(Universidade* pu)
{
    if(pu != NULL){
        LUniversidade.incluaObjeto(pu);
    }else{
        cout << "not included university!" << endl;
        cout << "invalid pointer" << endl;
    }
}
 
void ListaUniversidades::listeUniversidades()
{
    Elemento<Universidade>* pElaux = LUniversidade.getPrimeiro();
    Universidade* pUniv; 
    while(pElaux != NULL){  
        pUniv = pElaux -> getTipo();
        cout << "Universidade: " << pUniv->getNome()
            << endl;
        pElaux = pElaux -> getProximo();
    }
    getchar();
}
 
void ListaUniversidades::deleteUniversidades()
{
    LUniversidade.deleteObjetos();
}

Universidade* ListaUniversidades::localizar(char* n)
{
    return LUniversidade.localizar(n);
} 

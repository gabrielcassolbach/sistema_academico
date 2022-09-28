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

void ListaUniversidades::listar()
{
    Elemento<Universidade>* pElaux = LUniversidade.getPrimeiro();
    Universidade* pUniv; 
    while(pElaux != NULL){  
        pUniv = pElaux -> getTipo();
        cout << "Universidade: " << pUniv->getNome()
            << endl;
        pElaux = pElaux -> getProximo();
    }
}
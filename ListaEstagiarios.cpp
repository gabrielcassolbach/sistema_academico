#include "stdafx.h"
#include "ListaEstagiarios.h"

ListaEstagiarios::ListaEstagiarios()
{
    //empty!
}

ListaEstagiarios::~ListaEstagiarios()
{
    limpaLista();
}

void ListaEstagiarios::limpaLista()
{
    LEstagiarios.limpar();
}
   
void ListaEstagiarios::incluaEstagiario(Estagiario* pest)
{
    if(pest != NULL){
        LEstagiarios.incluaObjeto(pest);
    }else{
        cout << "not included intern!" << endl;
        cout << "invalid pointer" << endl;
    }
}
    
void ListaEstagiarios::listeEstagiarios()
{
    Elemento <Estagiario>* pElaux = NULL;  Estagiario* paux = NULL;
    pElaux = LEstagiarios.getPrimeiro();
    while (pElaux != NULL)
    {
        paux = pElaux -> getTipo();
        cout << "Estagiario " << paux -> getNome() << endl;
        pElaux = pElaux -> getProximo();
    }
}
    
void ListaEstagiarios::deleteEstagiarios()
{
    LEstagiarios.deleteObjetos();
}

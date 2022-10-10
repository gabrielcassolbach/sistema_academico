#include "stdafx.h"
#include "ListaPessoas.h"
   
ListaPessoas::ListaPessoas()
{
    //Empty!
}
 
ListaPessoas::~ListaPessoas()
{
    limparLista();
}

void ListaPessoas::limparLista()
{
    LPessoas.limpar();
}

void ListaPessoas::incluaPessoa(Pessoa* p)
{
    if(p != NULL){
        LPessoas.incluaObjeto(p);
    }else{
        cout << "not included person!" << endl;
        cout << "invalid pointer" << endl;
    }    
} 

void ListaPessoas::listePessoas()
{
    Elemento<Pessoa>* pElaux = LPessoas.getPrimeiro();
    Pessoa* pDaux;
    while(pElaux != NULL){
        pDaux = pElaux -> getTipo();
        cout << "Pessoa: " << pDaux -> getNome() << endl;
        pElaux = pElaux -> getProximo();
    }
} 

void ListaPessoas::deletePessoas()
{
    LPessoas.deleteObjetos();
}

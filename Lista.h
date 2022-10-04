#pragma once
#include "Elemento.h"
 
template <class TIPO>
class Lista
{
private:
    Elemento<TIPO>* pPrimeiro;
    Elemento<TIPO>* pAtual;

public:
    Lista();
    ~Lista();

    bool incluaElemento(Elemento <TIPO>* pElemento);
    bool incluaObjeto(TIPO* pObjeto);

    void inicializa();
    void limpar();

    void setPrimeiro(Elemento<TIPO>* pp);
    void setAtual(Elemento<TIPO>* pa);

    void deleteObjetos();

    Elemento<TIPO>* getPrimeiro();
    Elemento<TIPO>* getAtual();

    TIPO* localizar(char* n);
};

/*------------------------------------------------------------------------------------------------------*/
/*                                  DEFINIÇÃO DAS FUNÇÕES                                               */
/*------------------------------------------------------------------------------------------------------*/

template <class TIPO>
Lista<TIPO>::Lista()
{
    inicializa();
}

template <class TIPO>
Lista<TIPO>::~Lista()
{
    limpar();
}
 
template <class TIPO>
void Lista<TIPO>::setPrimeiro(Elemento<TIPO>* pp)
{
    pPrimeiro = pp;
}

template <class TIPO>
void Lista<TIPO>::setAtual(Elemento<TIPO>* pa)
{
    pAtual = pa;
}

template <class TIPO>
Elemento<TIPO>* Lista<TIPO>::getPrimeiro()
{
    return pPrimeiro;
}

template <class TIPO>    
Elemento<TIPO>* Lista<TIPO>::getAtual()
{
    return pAtual;
}

template <class TIPO>
void Lista<TIPO>::inicializa()
{
    pPrimeiro = NULL; pAtual = NULL;
}
 
template <class TIPO>
void Lista<TIPO>::limpar()
{
    Elemento <TIPO>* paux1;
    Elemento <TIPO>* paux2;

    paux1 = pPrimeiro;
    paux2 = paux1;

    while(paux1 != NULL){
        paux2 = paux1 -> getProximo();
        delete(paux1);
        paux1 = paux2;
    }
    
    pPrimeiro = NULL; 
    pAtual = NULL;
}

template <class TIPO>
bool Lista<TIPO>::incluaObjeto(TIPO* pObjeto)
{
    if(pObjeto != NULL){
        Elemento <TIPO>* pElemento = NULL;
        pElemento = new Elemento<TIPO> ();
        pElemento->setTipo(pObjeto);
        incluaElemento(pElemento);
        return true;
    }else{
        cout << "ERROR. NULL ELEMENT IN LIST!" << endl;
        return false;
    }
}

template <class TIPO>
bool Lista<TIPO>::incluaElemento(Elemento <TIPO>* pElemento)
{
    if(pElemento != NULL){
        if(pPrimeiro == NULL){
            pPrimeiro = pElemento;
            pPrimeiro -> setProximo(NULL); 
            pPrimeiro -> setAnterior(NULL);
            pAtual = pPrimeiro;
        }else{
            pElemento -> setAnterior(pAtual);
            pElemento -> setProximo(NULL);
            pAtual -> setProximo(pElemento);
            pAtual = pElemento;
        }
        return true;
    }else{
        cout << "ERROR. NULL ELEMENT IN LIST!" << endl;
        return false;
    }
}

template <class TIPO>
void Lista<TIPO>::deleteObjetos()
{
    Elemento<TIPO>* pElaux = pPrimeiro;
    TIPO* pObjeto;
    while(pElaux != NULL){
        pObjeto = pElaux -> getTipo();
        delete(pObjeto);
        pElaux = pElaux -> getProximo();
    }    
}

template <class TIPO>
TIPO* Lista<TIPO>::localizar(char* n)
{
    Elemento<TIPO>* paux = pPrimeiro;
    while(paux != NULL){
        if(0 == strcmp((paux -> getTipo())->getNome(), n)) return paux -> getTipo();
        paux = paux -> getProximo();
    } 
    return NULL;
}
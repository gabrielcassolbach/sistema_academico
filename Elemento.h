#pragma once

template <class TIPO>
class Elemento
{
private:
    Elemento <TIPO>* pProximo;
    Elemento <TIPO>* pAnterior;
    TIPO* pTipo;
    
public:
    Elemento();
    ~Elemento();

    void setProximo(Elemento<TIPO>* pp);
    void setAnterior(Elemento<TIPO>* pa);
    void setTipo(TIPO* pi);

    Elemento <TIPO>* getProximo(); 
    Elemento <TIPO>* getAnterior();

    TIPO* getTipo();
};

/*------------------------------------------------------------------------------------------------------*/
/*                                  DEFINIÇÃO DAS FUNÇÕES                                               */
/*------------------------------------------------------------------------------------------------------*/

template <class TIPO>
Elemento<TIPO>::Elemento()
{
    pProximo = NULL; pAnterior = NULL; pTipo = NULL;
}

template <class TIPO>
Elemento<TIPO>::~Elemento()
{
    pProximo = NULL; pAnterior = NULL; pTipo = NULL;
}

template <class TIPO>
void Elemento<TIPO>::setProximo(Elemento<TIPO>* pp)
{
    pProximo = pp;
}

template <class TIPO>
void Elemento<TIPO>::setAnterior(Elemento<TIPO>* pa)
{
    pAnterior = pa;
}

template <class TIPO>
void Elemento<TIPO>::setTipo(TIPO* pi)
{
    pTipo = pi;
}

template <class TIPO>
Elemento <TIPO>* Elemento<TIPO>::getProximo()
{
    return pProximo;
}
    
template <class TIPO>
Elemento <TIPO>* Elemento<TIPO>::getAnterior()
{
    return pAnterior;
}

template <class TIPO>
TIPO* Elemento<TIPO>::getTipo()
{
    return pTipo;
}


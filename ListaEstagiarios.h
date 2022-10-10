#pragma once
#include "Lista.h"
#include "Estagiario.h"

class ListaEstagiarios
{
private:
    Lista<Estagiario> LEstagiarios;

public:
    ListaEstagiarios();
    ~ListaEstagiarios();

    void limpaLista();
    void incluaEstagiario(Estagiario* pest);
    
    void listeEstagiarios();
    void deleteEstagiarios();
};
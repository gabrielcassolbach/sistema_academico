#pragma once
#include "Lista.h"
#include "Pessoa.h"
 
class ListaPessoas
{
private:
    Lista <Pessoa> LPessoas;

public:
    ListaPessoas();
    ~ListaPessoas();

    void limparLista();
    void incluaPessoa(Pessoa* p);
     
    void listePessoas();
    void deletePessoas();
};
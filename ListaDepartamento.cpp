#include "ListaDepartamentos.h"
 
ListaDepartamentos::ListaDepartamentos()
{
    // empty!
}

ListaDepartamentos::~ListaDepartamentos()
{
    limpaLista();
}

void ListaDepartamentos::limpaLista()
{
    LDepartamentos.limpar();
}

void ListaDepartamentos::incluaDepartamento(Departamento* pd)
{
    if(pd != NULL){
        LDepartamentos.incluaObjeto(pd);
    }else{
        cout << "not included departament!" << endl;
        cout << "invalid pointer" << endl;
    }
}

void ListaDepartamentos::listeDepartamentos()
{
    Elemento<Departamento>* pElDep = LDepartamentos.getPrimeiro();
    Departamento* pDaux;
    while(pElDep != NULL){
        pDaux = pElDep -> getTipo();
        cout << "Departamento: " << pDaux ->getNome() << endl;
        pElDep = pElDep -> getProximo();
    }      
}
 
void ListaDepartamentos::deleteDepartamentos()
{
    LDepartamentos.deleteObjetos();
}

Departamento* ListaDepartamentos::localizar(char* n)
{
    return LDepartamentos.localizar(n);
}

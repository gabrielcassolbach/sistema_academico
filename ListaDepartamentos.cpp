#include "ListaDepartamentos.h"
#include "ElDepartamento.h"
#include "Departamento.h"
#include <string.h>

ListaDepartamentos::ListaDepartamentos()
{
    num_departamentos = 0; strcpy(nome, "");
    pElDepartamentoPrim = NULL; pElDepartamentoAtual = NULL;
}

void ListaDepartamentos::inicializa()
{
    ListaDepartamentos();
}

ListaDepartamentos::ListaDepartamentos(int nd, char* c)
{
    num_departamentos = nd; strcpy(nome, c);
    pElDepartamentoPrim = NULL; pElDepartamentoAtual = NULL;
}

ListaDepartamentos::~ListaDepartamentos()
{
    ElDepartamento* paux1 = pElDepartamentoAtual; ElDepartamento* paux2 = paux1;
    while(paux1 != NULL){
        paux2 = paux1 -> pProx; 
        delete(paux1);
        paux1 = paux2;
    }   
    pElDepartamentoAtual = NULL; pElDepartamentoPrim = NULL;
}

void ListaDepartamentos::incluaDepartamento(Departamento *pd)
{
    if(cont_departamentos <= num_departamentos && pd != NULL){
        ElDepartamento* paux = new ElDepartamento(); 
        paux -> setDepartamento(pd);
        if(pElDepartamentoPrim == NULL){
            pElDepartamentoPrim = paux;
            pElDepartamentoAtual = paux;
        }else{
            pElDepartamentoAtual -> pProx = paux;
            paux -> pAtras = pElDepartamentoAtual;
            paux = pElDepartamentoAtual;
        }
    }else{
        if(pd == NULL) cout << "parâmetro inválido!" << endl;
        else cout << "Não é possível incluir mais departamentos!" << endl;
    }
}

void ListaDepartamentos::listeDepartamentos()
{
    ElDepartamento* paux = pElDepartamentoPrim;
    while(paux != NULL){
        cout << "Departamento: " << paux -> getNome() << endl;
        paux = paux -> pProx;
    } 
    getchar();
}

Departamento* ListaDepartamentos::localizar(char* n)
{
    ElDepartamento* paux = pElDepartamentoPrim;
    while(paux != NULL){ 
        if(0 == strcmp(paux -> getNome(), n)) return paux -> getDepartamento();
        else paux = paux -> pProx;
    }
    return NULL;
}


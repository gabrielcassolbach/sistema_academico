#include "ListaUniversidades.h"
#include "Departamento.h"
#include <string.h>
 
ListaUniversidades::ListaUniversidades(const char* c)
{
    strcpy(nome, c); num_univ = 45; contador_univ = 0;  
    pElUniversidadePrim = NULL; pElUniversidadeAtual = NULL;
}

void ListaUniversidades::inicializa()
{
    ListaUniversidades();
}

ListaUniversidades::~ListaUniversidades()
{
    ElUniversidade* paux1 = pElUniversidadePrim; ElUniversidade* paux2 = paux1;
    while(paux1 != NULL) {
        paux2 = paux1 -> pProx;
        delete(paux1);
        paux1 = paux2;
    }
    pElUniversidadePrim = NULL; pElUniversidadeAtual = NULL;
}

void ListaUniversidades::incluaUniversidade(Universidade* puniv)
{   
    if((contador_univ <= num_univ) && (puniv != NULL)){
        ElUniversidade* paux = NULL;
        paux = new ElUniversidade();
        paux -> setUniv(puniv);
        contador_univ ++;
        if(pElUniversidadePrim == NULL){
            pElUniversidadeAtual = paux;
            pElUniversidadePrim = paux;
        }else{
            pElUniversidadeAtual -> pProx = paux;
            paux -> pAtras = pElUniversidadeAtual;
            pElUniversidadeAtual = paux;
        }        
    }else{
        if(puniv == NULL) cout << "parâmetro inválido!" << endl;
        else cout << "Turma cheia! Não é possível incluir mais alunos." << endl;
    }
}

void ListaUniversidades::listeUniversidades()
{
    ElUniversidade* paux = pElUniversidadePrim;
    while(paux != NULL){
        cout << "Universidade: " << paux -> getNome() << endl;
        paux = paux -> pProx;
    }
    getchar();
}   

Universidade* ListaUniversidades::localizar(char* n)
{
    ElUniversidade* paux = pElUniversidadePrim;
    while(paux != NULL){
        if(0 == strcmp(paux -> getNome(), n)) return paux -> getUniv();
        paux = paux -> pProx;
    } 
    return NULL;
}


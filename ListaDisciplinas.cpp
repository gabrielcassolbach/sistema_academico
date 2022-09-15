#include "ListaDisciplinas.h"
#include "ElDisciplina.h"
#include <string.h>

ListaDisciplinas::ListaDisciplinas()
{
    contadorDisciplinas = 0; num_disciplinas = 0;
    strcpy(nome, "");
    pElDisciplinaPrim = NULL;
    pElDisciplinaAtual = NULL;
}

void ListaDisciplinas::inicializa()
{
    ListaDisciplinas();
}

ListaDisciplinas::ListaDisciplinas(int nd, char* c)
{
    contadorDisciplinas = 0; num_disciplinas = nd;
    strcpy(nome, c);
    pElDisciplinaPrim = NULL;
    pElDisciplinaAtual = NULL;
}
 
ListaDisciplinas::~ListaDisciplinas()
{
    ElDisciplina* paux1 = pElDisciplinaPrim; ElDisciplina* paux2 = paux1;
    while(paux1 != NULL){
        paux2 = paux1 -> pProx; 
        delete(paux1);
        paux1 = paux2;
    }   
    pElDisciplinaPrim = NULL; pElDisciplinaAtual = NULL;
}

void ListaDisciplinas::incluaDisciplina(Disciplina* pd)
{
    if(contadorDisciplinas <= num_disciplinas && pd != NULL){
        ElDisciplina* paux = NULL;
        paux = new ElDisciplina(); 
        paux -> setDisciplina(pd);
        if(pElDisciplinaPrim == NULL){
            pElDisciplinaAtual = paux;
            pElDisciplinaPrim = paux;
        }else{
            pElDisciplinaAtual -> pProx = paux;
            paux -> pAtras = pElDisciplinaAtual;
            pElDisciplinaAtual = paux;
        }
    }else{
        if(pd == NULL) cout << "parâmetro inválido!" << endl;
        else cout << "Turma cheia! Não é possível incluir mais alunos." << endl;
    }
}

void ListaDisciplinas::listeDisciplinas()
{
    ElDisciplina* t = pElDisciplinaPrim;
    while(t != NULL){
        cout << "Disciplina: " << t -> getNome() << endl;
        t = t->pProx;
    }
    getchar();
}

Disciplina* ListaDisciplinas::localizar(char* n)
{
    ElDisciplina* paux = pElDisciplinaPrim;
    while(paux != NULL){
        if(0 == strcmp(paux -> getNome(), n)) return paux ->getDisciplina();
        else paux = paux -> pProx;       
    }  
    return NULL;
}
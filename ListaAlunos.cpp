#include "ListaAlunos.h"
#include <string.h>
 
ListaAlunos::ListaAlunos ()
{
    contador_alunos = 0; num_alunos = 0;
    strcpy(nome, ""); 
    pElAlunoPrim = NULL; pElAlunoAtual = NULL;
}

void ListaAlunos::inicializa()
{
    ListaAlunos();
}
 
ListaAlunos::ListaAlunos (int na, char* n)
{
    contador_alunos = 0; num_alunos = na;
    strcpy(nome, n); 
    pElAlunoPrim = NULL; pElAlunoAtual = NULL;
}

ListaAlunos::~ListaAlunos ()
{
    ElAluno* paux1 = pElAlunoPrim;
    ElAluno* paux2 = paux1;
    while(paux1 != NULL){
        paux2 = paux1 -> pProx;
        delete(paux1);
        paux1 = paux2;
    }
    pElAlunoPrim = NULL;
    pElAlunoAtual = NULL;
}

void ListaAlunos::incluaAluno(Aluno* pa)
{
    if(num_alunos <= contador_alunos && pa != NULL){
        ElAluno* paux = NULL; 
        paux = new ElAluno(); paux -> setAluno(pa);
        if(pElAlunoPrim == NULL){
            pElAlunoPrim = paux;
            pElAlunoAtual = paux;
        }else{
            pElAlunoAtual -> pProx = paux;
            paux -> pAtras = pElAlunoAtual;
            pElAlunoAtual = paux;
        }
    }else{
        if(pa == NULL) cout << "parâmetro inválido!" << endl;
        else cout << "Turma cheia! Não é possível incluir mais alunos." << endl;
    }
}

void ListaAlunos::listeAlunos()
{
    ElAluno* t = pElAlunoPrim;
    while(t != NULL){
        cout << "Aluno " << t -> getNome() << endl;
        t = t -> pProx;
    }
    getchar();
}
#include "Disciplina.h"
#include "ElAluno.h"
#include "Aluno.h"
#include <string.h>

Disciplina::Disciplina()
{
	num_alunos = 45;
	contador_alunos = 0;
	pElAlunoAtual = NULL;
	pElAlunoPrim = NULL;
	pProx = NULL;
	pAtras = NULL;
	pDptoAssociado = NULL;
	strcpy_s(nome, "");
}

Disciplina::~Disciplina()
{
	pElAlunoAtual = NULL;
	pElAlunoPrim = NULL;
	pProx = NULL;
	pAtras = NULL;
	pDptoAssociado = NULL;
}

void Disciplina::setNome(const char* name)
{
	strcpy_s(nome, name);
}

char* Disciplina::getNome()
{
	return nome;
}

void Disciplina::setDepartamento(Departamento* pdpto)
{
	pDptoAssociado = pdpto;
}

void Disciplina::incluaAlunos(Aluno *pa)
{
	ElAluno* paux = NULL;
	paux = new ElAluno();
	paux->setAluno(pa);

	if ((contador_alunos < num_alunos) && (pa != NULL)) {
		if (pElAlunoPrim == NULL) {
			pElAlunoPrim = paux;
			pElAlunoAtual = paux;
		}
		else {
			pElAlunoAtual->pProx = paux;
			paux->pAtras = pElAlunoAtual;
			pElAlunoAtual = paux;
		}
		contador_alunos++;
	}else {
		cout << "Aluno nao incluido. Turma cheia!" << endl;
	}
}

void Disciplina::listeAlunos()
{
	ElAluno* paux;
	paux = pElAlunoPrim;
	while (paux != NULL) {
		cout << "Aluno " << paux->getNome() << "matriculado na disciplina "
			<< nome << endl;
		paux = paux->pProx;
	}
}
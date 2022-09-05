#include "Principal.h"

Principal::Principal() 
{
	// Inicializações referentes aos Alunos.
	Gabriel.inicializa(19, 12, 2001, "Gabriel Bach");
	Enzo.inicializa(10, 9, 2004, "Enzo");
	Ian.inicializa(10, 03, 2003, "Ian");

	// Inicializações referentes às universidades.
	UTFPR.setNome("UTFPR");
	UTFPR.setDptosFiliados(&DAINF, 1);

	// Inicializações referentes aos departamentos.
	DAINF.setNome("DAINF"); DAINF.setUnivFiliado(&UTFPR);
	DAINF.incluaDisciplina(&COMP1);	DAINF.incluaDisciplina(&COMP2);
	DAINF.incluaDisciplina(&ALG); DAINF.incluaDisciplina(&TEC);

	// Inicializações referentes às disciplinas.
	COMP1.setNome("COMP1"); COMP1.setDepartamento(&DAINF);
	COMP2.setNome("COMP2"); COMP2.setDepartamento(&DAINF);
	ALG.setNome("ALG");     ALG.setDepartamento(&DAINF);
	TEC.setNome("TEC");     TEC.setDepartamento(&DAINF);
	
	TEC.incluaAlunos(&Gabriel); 
	TEC.incluaAlunos(&Ian);
	TEC.incluaAlunos(&Enzo);

	COMP1.incluaAlunos(&Gabriel);
	COMP1.incluaAlunos(&Ian);
	COMP1.incluaAlunos(&Enzo);
}

void Principal::executar()
{
	// Execuções referentes ao objeto Universidade:
	UTFPR.informa(1); 

	// Execuções referentes aos objetos Departamento:
	DAINF.informa(); // ok!
	DAINF.listedisciplinas2(); // ok!
	
	// Execuções referentes aos objetos Disciplina:
	TEC.listeAlunos();
	COMP1.listeAlunos();
}

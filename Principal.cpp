#include "Principal.h"

Principal::Principal() 
{
	// Inicializa��es referentes aos Alunos.
	Gabriel.inicializa(19, 12, 2001, "Gabriel Bach");
	Enzo.inicializa(10, 9, 2004, "Enzo");
	Ian.inicializa(10, 03, 2003, "Ian");

	// Inicializa��es referentes �s universidades.
	UTFPR.setNome("UTFPR");
	UTFPR.setDptosFiliados(&DAINF, 1);
	UTFPR.incluaDepartamentos(&DAINF);
	UTFPR.incluaDepartamentos(&DAELN);
	UTFPR.incluaDepartamentos(&DAMAT);

	// Inicializa��es referentes aos departamentos.
	DAINF.setNome("DAINF"); 
	DAELN.setNome("DAELN");
	DAMAT.setNome("DAMAT");
	DAINF.setUnivFiliado(&UTFPR);
	DAINF.incluaDisciplina(&COMP1);
	DAINF.incluaDisciplina(&COMP2);
	DAINF.incluaDisciplina(&ALG); 
	DAINF.incluaDisciplina(&TEC);

	// Inicializa��es referentes �s disciplinas.
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
	// Execu��es referentes ao objeto Universidade:
	UTFPR.informa(1); 
	UTFPR.listaDepartamentos();

	// Execu��es referentes aos objetos Departamento:
	DAINF.informa(); 
	DAINF.listedisciplinas(); 
	
	// Execu��es referentes aos objetos Disciplina:
	TEC.listeAlunos();
	COMP1.listeAlunos();
	DAINF.listedisciplinas();
}

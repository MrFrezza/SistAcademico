#include <iomanip>
#include <string>

using namespace std;

#include "Matriculas.h"

Matriculas::Matriculas(AlunoDB *dbalu, DisciplinaDB *dbdis){
	AlunoDB *dba = dbalu;
	DisciplinaDB *dbd = dbdis;	
}


bool Matriculas::matricular (string c, string cd){
	
	a = dba->getAlunoPtr(c);
	d = dbd->getDisciplinaPtr(cd);
	if((a->insereDisciplina(d)) and (d->insereAluno(a))){
		cout<<"\nMatricula efetuada com sucesso !!!!";
	}else{
		cout<<"\nFalha na matricula !!!!";
	}
	
	a->printCompleto();
//	d->printCompleto();	
}

/*
bool Matriculas::cancelar (string c, string cd) {
	
	a = dba->getAlunoPtr(c);
	d = dbd->getDisciplinaPtr(cd);
	if((a->deletaDisciplina(d)) and (d->deletaAluno(a))){
		cout<<"\nMatricula cancelada com sucesso !!!!";
	}else{
		cout<<"\nFalha no cancelamento da matricula !!!!";
	}
	
	a->printCompleto();
	d->printCompleto();
}
*/
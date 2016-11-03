#include <iomanip>
#include <string>

using namespace std;

#include "Matriculas.h"

Matriculas::Matriculas(AlunoDB *dbalu, DisciplinaDB *dbdis){
	dba = dbalu;
	dbd = dbdis;	
}


bool Matriculas::matricular (string c, string cd){
	
//	a = dba->getAlunoPtr(c);
	
	if((dba->getAlunoPtr(c)) == 0){
		cout<<"CPF nao encontrado"<<endl;
		return false;
	}else{
		a = dba->getAlunoPtr(c);
	}
			
//	d = dbd->getDisciplinaPtr(cd);
	
	if((dbd->getDisciplinaPtr(cd)) == 0){
		cout<<"Codigo de disciplina nao encontrado"<<endl;
		return false;
	}else{
		d = dbd->getDisciplinaPtr(cd);	
	}
	
	if((a->insereDisciplina(d)) and (d->insereAluno(a))){
		cout<<"\nMatricula efetuada com sucesso !!!!\n";
	}else{
		cout<<"\nFalha na matricula !!!!\n";
	}
	
	a->printCompleto();
	d->printCompleto();	
}


bool Matriculas::cancelar (string c, string cd) {
	
	a = dba->getAlunoPtr(c);
	d = dbd->getDisciplinaPtr(cd);
	if((a->deletaDisciplina(d)) and (d->deletaAluno(a))){
		cout<<"\nMatricula cancelada com sucesso !!!!\n";
	}else{
		cout<<"\nFalha no cancelamento da matricula !!!!\n";
	}
	
	a->printCompleto();
	d->printCompleto();
}

void Matriculas::verifica(string c, string cd){
	if( (dba->getAlunoPtr(c) == 0) or (dbd->getDisciplinaPtr(cd) == 0) ){
		cout<<"Aluno nao esta matriculado"<<endl;
	}else{
		cout<<"Aluno esta matriculado"<<endl;
	}
}


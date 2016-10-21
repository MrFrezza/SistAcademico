#include <iostream>
#include <string>

#include "Aluno.h"

using namespace std;

Aluno::Aluno(string c, string n, string cs): Pessoa(c, n){
	setCurso(cs);
	
	
	for(int i = 0; i < 10; i++){
		da[i] = 0;		
	}
	
}

void Aluno::setCurso(string cs){
	curso = cs;
}

string Aluno::getCurso(){
	return curso;
}

bool Aluno::insereDisciplina(Disciplina* dptr){
	
	for(int i = 0; i<10; i++){
		if(da[i] == 0){
			da[i] = dptr;
			return true;
		}
	}	
	
	return false;
}

void Aluno::printCompleto(){
	cout<<"PrintCompleto"<<endl;
	cout<<"Nome: "<<getNome()<<endl;
	cout<<"CPF: "<<getCpf()<<endl;
	cout<<"Curso: "<<getCurso()<<endl;
	cout<<"Minhas disciplinas:"<<endl;
	for(int i = 0;i<10; i++){
		cout<<"Dis:   "<<da[i]<<endl;
	}
	
	
}



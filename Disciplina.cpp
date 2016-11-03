#include <iomanip>
#include <string>

using namespace std;

#include "Disciplina.h"

Disciplina::Disciplina(string cd, string nd){
	
	setNomeDisc(nd);
	setCodDisc(cd);
	
	for(int i = 0; i<10; i++){
		ad[i] = 0;
	}
}

void Disciplina::setCodDisc(string cd){
	codDisc = cd;
}

string Disciplina::getCodDisc(){
	return codDisc;
}


void Disciplina::setNomeDisc(string nd){
	nomeDisc = nd;
}

string Disciplina::getNomeDisc(){
	return nomeDisc;
} 

bool Disciplina::insereAluno (Aluno* aptr){
	
	for(int i = 0; i<10; i++){
		if(ad[i] == 0){
			ad[i] = aptr;
			return true;
		}
	}	
	return false;	
}

bool Disciplina::deletaAluno(Aluno* aptr){ /// Deleta Aluno 
	
	for(int i = 0; i<10; i++){/// PODE CAUSAR ERROS
		if(ad[i] == aptr){
			//delete ad[i];
			ad[i] = 0;
			return true;
		}
	}
	return false;
}

void Disciplina::print(){/////////////  Print específico do aluno 

}

void Disciplina::printCompleto(){
	
	cout<<"Alunos na Disciplina "<<getNomeDisc()<<endl<<endl;
	for(int i = 0; i<10; i++){
		if(ad[i] != 0){
			cout<<"Nome: "<< ad[i]->getNome()  <<endl;
			cout<<"CPF: "<< ad[i]->getCpf() <<endl;
			cout<<"Curso: "<< ad[i]->getCurso()  <<endl;
			cout<<endl;
		}	
	}	
	cout<<endl<<"----------------------------"<<endl;	
}
//-----------------------  INICIO OVERRIDE ---------
void Disciplina::deletaMatriculas(Aluno * ptr){
	for(int i = 0; i<10; i++){
		if(ad[i] == ptr){
			ad[i] = 0;
			cout<<endl<<"Retirou da Disciplina"<<endl<<endl;
		}
	}
}

void Disciplina::deletaMatriculas(Disciplina * ptr){
	for(int i = 0; i<10; i++){
		if(ad[i] != 0){
			ad[i]->deletaDisciplina(ptr);
			ad[i] = 0;
			cout<<endl<<"Retirou da Alunos"<<endl<<endl;
		}
	}
}
//-----------------------  FIM OVERRIDE ---------

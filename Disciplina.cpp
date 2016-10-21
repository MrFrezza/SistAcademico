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

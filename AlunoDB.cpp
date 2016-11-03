#include <iostream>
#include <string>

#include "AlunoDB.h"

using namespace std;

AlunoDB::AlunoDB(){
	for(int i = 0; i < 10; i++){
		a[i] = 0; 
	}
}

int AlunoDB::existe(string c){
	for(int i = 0; i <10 ; i++){
		
		if(a[i] != 0){
		
			if(a[i]->getCpf() == c){
				return i;
			}
		}
	}
	return -1;
}

bool AlunoDB::incluir(string c, string n, string cs){
	
	if(existe(c) == -1){
		for(int  i = 0; i < 10; i++){
			if(a[i] == 0){	
				a[i] = new Aluno(c, n, cs);		
				return true;							
			}
		}	
	}// FIM DA VERIFICAÇÃO SE O ALUNO EXITE PARA INSERIR
	
	return false;	
}

bool AlunoDB::consultar(string c){/// ------------------------------- MESMO DO LISTA POREM ESPECIFICO DO ALUNO REQUISITADO
	cout<<"Lista de Alunos no AlunoDB"<<endl<<endl;
	for(int i = 0; i<10; i++){
		if(a[i] != 0){
			if(a[i]->getCpf() == c ){
				a[i]->printCompleto(); 
				return true;
			}		
		}
	}
	return false;
}

void AlunoDB::listar(){ /// ------------------------------- Lista os aunos e suas respectivas disciplinas
	cout<<"Lista de Alunos no AlunoDB"<<endl<<endl;
	for(int i = 0; i<10; i++){
		if(a[i] == 0){
			cout<<"-------"<<endl;
		}else{
			a[i]->printCompleto(); 
		}
	}
	cout<<endl;
}

Aluno * AlunoDB::getAlunoPtr(string c){
/*	for(int i = 0; i<10; i++){
		if(a[i] != 0){
			if(a[i]->getCpf() == c ){
				return a[i];
			}
		}
	}
*/
int vai = existe(c);

	if(vai > -1){
		return a[vai];
	}else{
		return 0;
	}
	
}

bool AlunoDB::excluir(string c){

	int vai = existe(c);	
	if(vai > -1){
		a[vai]->deletaMatriculas(getAlunoPtr(c));
		a[vai] = 0;	
		return true;
	}	
	return false;
}


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
			string cpf = a[i]->getCpf();
		
			if(cpf == c){
				return 1;
			}
		}
	}
	return 0;
}

bool AlunoDB::incluir(string c, string n, string cs){
	
	if(existe(c) == 0){
		for(int  i = 0; i < 10; i++){
			if(a[i] == 0){///////// Verifica se a posição do vetor alunos está vazia	
				a[i] = new Aluno(c, n, cs);		
				return true;							
			}
		}	
	}// FIM DA VERIFICAÇÃO SE O ALUNO EXITE PARA INSERIR
	
	return false;	
}

bool AlunoDB::consultar(string c){/// ------------------------------- MESMO DO LISTA POREM ESPECIFICO DO ALUNO REQUISITADO
	
	for(int i = 0; i<10; i++){
		
	}
}

void AlunoDB::listar(){ /// ------------------------------- FALTA EXIBIR DISCIPLINAS ONDE OS ALUNOS ESTÃO CADASTRADOS
	cout<<"Lista de Alunos no AlunoDB"<<endl<<endl;
	for(int i = 0; i<10; i++){
		cout<<"Aluno: "<<a[i]->getNome()<<endl;
	}
	cout<<endl;
}

 Aluno* AlunoDB::getAlunoPtr(string c){
	
	for(int i = 0; i<10; i++){
		if(a[i] != 0){
			if(a[i]->getCpf() == c){
				return a[i];
			}
		}
	}
	
}


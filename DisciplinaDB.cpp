#include <iomanip>
#include <string>

using namespace std;

#include "DisciplinaDB.h"

DisciplinaDB::DisciplinaDB(){
	for(int i = 0;i <10; i++){
		d[i] = 0;
	}
}

int DisciplinaDB::existe(string cd){
	for(int i = 0; i <10 ; i++){
		
		if(d[i] != 0){
		
			if(d[i]->getCodDisc() == cd){
				return i;
			}
		}

	}
	return -1;
}

bool DisciplinaDB::incluir(string cd, string nd){
	
	if(existe(cd) == -1){
		for(int  i = 0; i < 10; i++){
			if(d[i] == 0){///////// Verifica se a posição do vetor Disciplina está vazia	
				d[i] = new Disciplina(cd, nd);
				return true;							
			}
		}	
	}// FIM DA VERIFICAÇÃO SE A disciplina EXITE PARA INSERIR
}

Disciplina* DisciplinaDB::getDisciplinaPtr(string cd){
/*	for(int i = 0; i<10; i++){
		if(d[i] != 0){
			if(d[i]->getCodDisc() == cd){
				return d[i];
			}
		}
	}*/	
	int vai = existe(cd);

	if(vai > -1){
		return d[vai];
	}else{
		return 0;
	}
}

void DisciplinaDB::listar(){
	int conta = 0;
	for(int i = 0;i < 10; i++){
		if(d[i] != 0){
			cout<<"Disciplina :"<< d[i]->getNomeDisc() <<"; "<<endl;
			d[i]->printCompleto();
			
		}else{
			conta++;
		}		
	}
	if(conta == 9){
		cout<<"Nenhuma Disciplina cadastrada"<<endl;
	}
}

bool DisciplinaDB::excluir(string cd){

	int vai = existe(cd);	
	if(vai > -1){
		d[vai]->deletaMatriculas(getDisciplinaPtr(cd));
		d[vai] = 0;
		return true;
	}	
	return false;
}



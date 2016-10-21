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
			string cdV = d[i]->getCodDisc();
		
			if(cdV == cd){
				return 1;
			}
		}

	}
	return 0;
}

bool DisciplinaDB::incluir(string cd, string nd){
	
	if(existe(cd) == 0){
		for(int  i = 0; i < 10; i++){
			if(d[i] == 0){///////// Verifica se a posição do vetor Disciplina está vazia	
				d[i] = new Disciplina(cd, nd);
				return true;							
			}
		}	
	}// FIM DA VERIFICAÇÃO SE A disciplina EXITE PARA INSERIR
}

Disciplina* DisciplinaDB::getDisciplinaPtr(string cd){
	for(int i = 0; i<10; i++){
		if(d[i] != 0){
			if(d[i]->getCodDisc() == cd){
				return d[i];
			}
		}
	}
}





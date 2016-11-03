#ifndef ALUNODB_H
#define ALUNODB_H

#include <string>
#include <iostream>

#include "Aluno.h"

using namespace std;

class AlunoDB{
	public:
		AlunoDB();
		int existe 		(string c);
		bool incluir	(string c, string n, string cs);
		bool excluir	(string c);
		bool consultar	(string c);
		void listar		();
		
		Aluno * getAlunoPtr(string c);
		
	private:
		Aluno *a[10];
};

#endif

#ifndef MATRICULAS_H
#define MATRICULAS_H

#include "AlunoDB.h"
#include "DisciplinaDB.h"

using namespace std;

class Matriculas {
	private:
		AlunoDB 	*dba;
		DisciplinaDB 	*dbd;
		Aluno 		*a;
		Disciplina 	*d;
		
	public:
		Matriculas (AlunoDB *dba, DisciplinaDB *dbd);  // ---- OK
		
		bool matricular (string c, string cd);  // ---- OK
		bool cancelar (string c, string cd);
		
		void verifica (string c, string cd);
};

#endif

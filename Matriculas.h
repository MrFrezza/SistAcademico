#include "AlunoDB.h"
#include "DisciplinaDB.h"

using namespace std;

class Matriculas {
	private:
		AlunoDB *dba;
		Disciplina *dbd;
		Aluno *a;
		Disciplina *d;
		
	public:
		Matriculas (AlunosDB *dba, DisciplinaDB * dbd);
		
		bool matricular (string c, string cd);
		bool cancelar (string c, string cd);
};

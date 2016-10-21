#include "Disciplina.h"

using namespace std;

class DisciplinaDB{
	private:
		Disciplina *d[10];
		
	public:
		DisciplinaDB();
		
		int exite(string cd);
		Disciplina* getDisciplina(string cd);
		bool incluir (string cd, string nd);
		bool excluir (string cd);
		bool consultar (string cd);
		void listar ();
};

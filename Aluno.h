#include "Pessoa.h"
#include "Disciplina.h"

using namespace std;

class Disciplina;

class Aluno : public Pessoa {
	private:
		string curso;
		Disciplina *da[10];
		
	public:
		Aluno(string c, string n, string cs);
		void setCurso(string cs);
		string getCurso();
		
		bool insereDisciplina (Disciplina* dptr);
		bool deleteDisciplina (Disciplina* dptr);
		void deletaMatriculas ();
		
		void print();
		void printCompleto();
		~Aluno();
	
};

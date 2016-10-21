#inclulde "Aluno.h"

class Aluno;

class Disciplina{
	private:
		string codDisc;
		string nomeDisc;
		Aluno *ad[10];
	
	public:
		Disciplina (string cd, string nd);
		
		void setCodDisc(string cd);
		string getCodDisc();
		void setNomeDisc(string nd);
		string getNomeDisc();
		
		bool insereAluno (Aluno* aptr);
		bool deletaAluno (Aluno* aptr);
		void deletaMatriculas ();
		
		void print();
		void printCompleto();
		~Disciplina();	 
};

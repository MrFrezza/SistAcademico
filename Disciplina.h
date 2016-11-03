#ifndef DISCIPLINA_H
#define DISCIPLINA_H

#include "Aluno.h"

class Aluno;

class Disciplina{
	private:
		string codDisc;
		string nomeDisc;
		Aluno *ad[10];
	
	public:
		Disciplina (string cd, string nd);  // ---- OK
		
		void setCodDisc(string cd);  // ---- OK
		string getCodDisc();  // ---- OK
		void setNomeDisc(string nd);  // ---- OK
		string getNomeDisc();  // ---- OK
		
		bool insereAluno (Aluno* aptr); // ---- OK
		bool deletaAluno (Aluno* aptr);// ----- ---- OK
		void deletaMatriculas (Aluno * ptr);
		void deletaMatriculas (Disciplina * ptr);
		
		void print();
		void printCompleto();///// OK
		~Disciplina();	 
};

#endif

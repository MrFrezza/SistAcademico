#include <iostream>

using namespace std;

class Pessoa{
	public:
		Pessoa(string c, string n);
		
		void setCpf(string c);
		string getCpf();
		void setNome(string n);
		string getNome();
		
		void print();
		
	private:
		string cpf;
		string nome;
};

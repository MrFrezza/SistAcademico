#include <iostream>
#include <string>

#include "Pessoa.h"

using namespace std;

Pessoa::Pessoa(string c, string n){
	setNome(n);
	setCpf(c);
}

void Pessoa::setCpf(string c){
	cpf = c;
}

string Pessoa::getCpf(){
	return cpf;
}

void Pessoa::setNome(string n){
	nome = n;
}

string Pessoa::getNome(){
	return nome;
}

void Pessoa::print(){
	cout<<"Nome: "<<getNome()<<endl;
	cout<<"CPF: "<<getCpf()<<endl;
}



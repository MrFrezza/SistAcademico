#include <iostream>
#include <string>

#include "Menus.h"

using namespace std;

Menus::Menus(){
	setMenuAluno();
	setMenuDisci();
	setMenuMatri();
	setMenuMenus();	
}

void Menus::setMenuAluno(){
	menuAluno[0] = "1) - Incluir Aluno";
	menuAluno[1] = "2) - Excluir Aluno";
	menuAluno[2] = "3) - Consultar Alunos";
	menuAluno[3] = "4) - Listar todos os Alunos";
	menuAluno[4] = "5) - Retornar ao Menu Principal";
}

void Menus::setMenuDisci(){
	menuDisci[0] = "1) - Adicionar Disciplina";
	menuDisci[1] = "2) - Deletar Disciplina";
	menuDisci[2] = "3) - Listar Disciplinas"; 
	menuDisci[3] = "4) - Voltar";
}

void Menus::setMenuMatri(){
	menuMatri[0] = "1) - Matricular Aluno";
	menuMatri[1] = "2) - Desmatricular Aluno";
	menuMatri[2] = "3) - Verifica Matricula";
	menuMatri[3] = "4) - Voltar";
}

void Menus::setMenuMenus(){
	menuMenus[0] = "1) - Menu do Cadastro de Alunos";
	menuMenus[1] = "2) - Menu do Cadastro de Disciplinas";
	menuMenus[2] = "3) - Menu de Disciplinas";
	menuMenus[3] = "4) - Encerrar";
}

string * Menus::getMenuMenus(){
	return &(menuMenus[0]);
}

string * Menus::getMenuAluno(){
	return &(menuAluno[0]);
}

string * Menus::getMenuDisci(){
	return &(menuDisci[0]);
}

string * Menus::getMenuMatri(){
	return &(menuMatri[0]);
}

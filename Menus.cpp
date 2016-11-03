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
	menuAluno[0] = "Menu de Alunos";
	menuAluno[1] = "1) - Incluir Aluno";
	menuAluno[2] = "2) - Excluir Aluno";
	menuAluno[3] = "3) - Consultar Alunos";
	menuAluno[4] = "4) - Listar todos os Alunos";
	menuAluno[5] = "5) - Retornar ao Menu Principal";
}

void Menus::setMenuDisci(){
	menuDisci[0] = "Menu de Disciplinas";
	menuDisci[1] = "1) - Adicionar Disciplina";
	menuDisci[2] = "2) - Deletar Disciplina";
	menuDisci[3] = "3) - Listar Disciplinas"; 
	menuDisci[4] = "4) - Voltar";
}

void Menus::setMenuMatri(){
	menuMatri[0] = "Menu de Matriculas";
	menuMatri[1] = "1) - Matricular Aluno";
	menuMatri[2] = "2) - Desmatricular Aluno";
	menuMatri[3] = "3) - Verifica Matricula";
	menuMatri[4] = "4) - Voltar";
}

void Menus::setMenuMenus(){
	menuMenus[0] = "Menu Principal";
	menuMenus[0] = "1) - Menu do Cadastro de Alunos";
	menuMenus[1] = "2) - Menu do Cadastro de Disciplinas";
	menuMenus[2] = "3) - Menu de Matricula";
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

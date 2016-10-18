#include <iostream>
#include <string>

#include "Menus.h"

using namespace std;

Menus::Menus(){
	
	menuAluno[4] = {"1) - Cadastrar Aluno", "2) - Deletar Aluno", "3) - Listar Alunos", "4) - Voltar"};
	menuDisci[4] = {"1) - Adicionar Disciplina", "2) - Deletar Disciplina", "3) - Listar Disciplinas", "4) - Voltar"};
	menuMatri[4] = {"1) - Matricular Aluno", "2) - Desmatricular Aluno", "3) - Verifica Matricula", "4) - Voltar"};
	menuMenus[4] = {"1) - Menu de Alunos", "2) - Menu de Disciplinas", "3) - Menu de Matrícula", "4) - Voltar"};
}

Menus::getMenuMenus(){
	
}

#include <iostream>
#include <String.h>
#include <stdlib.h>

#include "Menus.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

#include "AlunoDB.h"
#include "DisciplinaDB.h"
#include "Matriculas.h"


void * ImpMenu(string * pont);

int main(int argc, char** argv) {
	
	AlunoDB dbAluno = AlunoDB();
	DisciplinaDB dbDisc = DisciplinaDB();
	Matriculas matriculas = Matriculas(&dbAluno, &dbDisc);
	
	string cpf, nome, curso, codDisc, nomeDisc;
	
	
	Menus menu;
	string *menuPrin;
	int opt1;
	bool respFun;
	
	menuPrin= menu.getMenuMenus();
	
	cout<<"Bem vindo ao sistema academico v1"<<endl;
	cout<<menu.getMenuMenus()<<endl;
	cout<<"-----"<<endl;
	
	ImpMenu(menuPrin);//CHAMA FUNÇÃO PARA IMPRIMIR O ARRAY DE MENU
		
	cout<<"Digite o numero da opcao desejada"<<endl;
	cin>>opt1;
	system("cls");
	
	int ctn = 1;
/// INICIO DO MENU	
	
	while(ctn){
		switch(opt1){
			case 1:
				menuPrin = menu.getMenuAluno();			
				ImpMenu(menuPrin);
				cin>>opt1;
				switch(opt1){
					case 1:
						{//cadastrar aluno ---------- cadastrar aluno ------- cadastrar aluno
							string nome, cpf, curso;						
							cout<<"Qual o nome do Aluno ?"<<endl;
							cin>>nome;
							cout<<"Qual o CPF do Aluno ?"<<endl;
							cin>>cpf;
							cout<<"Qual e o curso ?"<<endl;
							cin>>curso;
							
							respFun = dbAluno.incluir(cpf, nome, curso);
							
							if(respFun){
								cout<<"Aluno adicionado com sucesso"<<endl;
							}else{
								cout<<"Falha ao adicionar o Aluno"<<endl;
							}
						break;
						}
					case 2:
						//deletar aluno
						break;
					case 3:
						//listar aluno
						break;
					case 5:
						//voltar;
						{
							system("cls");
							menuPrin = menu.getMenuMenus();
							ImpMenu(menuPrin);
							cout<<"Digite o numero da opcao desejada"<<endl;
							cin>>opt1;
							break;
						}
					default:
						//default é voltar
						{
							system("cls");
							menuPrin = menu.getMenuMenus();
							ImpMenu(menuPrin);	
							cout<<"Digite o numero da opcao desejada"<<endl;
							cin>>opt1;							
							break;
						}
				}					
				break;
			case 2:
				menuPrin = menu.getMenuDisci();
				ImpMenu(menuPrin);
				cin>>opt1;
				switch(opt1){
					case 1:
						{//cadastrar disciplina ---------- cadastrar disciplina ------- cadastrar disciplina
							string codD, nomD;						
							cout<<"Qual o nome da disciplina ?"<<endl;
							cin>>nomD;
							cout<<"Qual o codigo da disciplina ?"<<endl;
							cin>>codD;
							
							respFun = dbDisc.incluir(codD, nomD);
							
							if(respFun){
								cout<<"Disciplina adicionada com sucesso"<<endl;
							}else{
								cout<<"Falha ao adicionar a disciplina"<<endl;
							}
						break;
						}
					case 2:
						//deletar Disciplina
						break;
					case 3:
						//listar Disciplina
						break;
					case 4:
						//voltar;
						{
							system("cls");
							menuPrin = menu.getMenuMenus();
							ImpMenu(menuPrin);
							cout<<"Digite o numero da opcao desejada"<<endl;
							cin>>opt1;
							break;
						}
					default:
						{
							system("cls");
							menuPrin = menu.getMenuMenus();
							ImpMenu(menuPrin);
							cout<<"Digite o numero da opcao desejada"<<endl;
							cin>>opt1;
							break;
						}
				}	
				break;
			case 3:
				menuPrin = menu.getMenuMatri();
				ImpMenu(menuPrin);
				cin>>opt1;
				switch(opt1){
					case 1:
						//cadastrar aluno
						break;
					case 2:
						//deletar aluno
						break;
					case 3:
						//listar aluno
						break;
					case 4:
						//voltar;
						{
							system("cls");
							menuPrin = menu.getMenuMenus();
							ImpMenu(menuPrin);
							cout<<"Digite o numero da opcao desejada"<<endl;
							cin>>opt1;
							break;
						}
					default:
						{
							system("cls");
							menuPrin = menu.getMenuMenus();
							ImpMenu(menuPrin);
							cout<<"Digite o numero da opcao desejada"<<endl;
							cin>>opt1;
							break;
						}
				}		
				break;
			case 4:
				{
					system("cls");
					menuPrin = menu.getMenuMenus();
					ImpMenu(menuPrin);
					ctn = 0;
					break;	
				}
			default:
				{
					menuPrin = menu.getMenuMenus();
					ImpMenu(menuPrin);
					ctn = 0;
					break;	
				}
		}
	}
/// FIM DO MENU

	system("pause");
	return 0;
}

void * ImpMenu(string * pont){
	for(int i = 0; i < 4; i++){
		cout<<*(pont+i)<<endl;
	}
	cout<<endl;
}

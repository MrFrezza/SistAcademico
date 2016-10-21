#include <iostream>
#include <String.h>
#include <stdlib.h>

#include "Menus.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

void * ImpMenu(string * pont);

int main(int argc, char** argv) {
	
	Menus menu;
	string *menuPrin;
	int opt1;
	
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
						break;
					default:
						//default é voltar
						break;
				}					
				break;
			case 2:
				menuPrin = menu.getMenuDisci();
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
						break;
					default:
						//default é voltar
						break;
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
						break;
					default:
						//default é voltar
						break;
				}		
				break;
			case 4:
				menuPrin = menu.getMenuMenus();
				ImpMenu(menuPrin);	
				break;
			default:
				menuPrin = menu.getMenuMenus();
				ImpMenu(menuPrin);
				ctn = 0;
				break;			
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

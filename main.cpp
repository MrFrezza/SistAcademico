#include <iostream>
#include <String.h>
#include <stdlib.h>

#include "Menus.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

#include "AlunoDB.h"
#include "DisciplinaDB.h"
#include "Matriculas.h"


void * ImpMenu(string * pont, string tipo);

int main(int argc, char** argv) {
	
	AlunoDB dbAluno = AlunoDB();
	DisciplinaDB dbDisc = DisciplinaDB();
	Matriculas matriculas = Matriculas(&dbAluno, &dbDisc);
	
	string cpf, nome, curso, codDisc, nomeDisc;
	
	
	Menus menu;
	string *menuPrin;
	int opt1 = 0;
	bool respFun;
	
	menuPrin= menu.getMenuMenus();
	
	cout<<"Bem vindo ao sistema academico v1"<<endl;
//	cout<<menu.getMenuMenus()<<endl;
	cout<<"-----"<<endl;
	
	ImpMenu(menuPrin, "");//CHAMA FUNÇÃO PARA IMPRIMIR O ARRAY DE MENU
		
	cout<<"Digite o numero da opcao desejada"<<endl;
	cin>>opt1;
	system("cls");
	
	int ctn = 1;
/// INICIO DO MENU	
	
	while(ctn){
		switch(opt1){
			case 1:
				menuPrin = menu.getMenuAluno();			
				ImpMenu(menuPrin, "alunos");
				cout<<"Digite o numero da opcao desejada: "<<endl;
				cin>>opt1;
				system("cls");
				switch(opt1){
					case 1:
						{//cadastrar aluno ---------- cadastrar aluno ------- cadastrar aluno -------------
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
								system("cls");
							}else{
								cout<<"Falha ao adicionar o Aluno"<<endl;
								system("cls");
							}
							
						break;
						}
					case 2://deletar aluno	------ deletar aluno --- deletar aluno
						{
							string cpfDel;
							cout<<"Digite o CPF do aluno que sera deletado..."<<endl;
							cin>>cpfDel;
							
							if(dbAluno.excluir(cpfDel)){
								cout<<"Aluno deletado com sucesso"<<endl;
								cout<<"1) Digite 1 para voltar.."<<endl;
								cin>>opt1;
								system("cls");
							}else{
								cout<<"Erro ao deletar o aluno"<<endl;
								cout<<"1) Digite 1 para voltar.."<<endl;
								cin>>opt1;
								system("cls");
							}
						}
						break;
					case 3:// consultar aluno ------ consultar aluno ------- consulta aluno
						{
							string cpfIN;
							cout<<"Digite o CPF do aluno que deseja pesquisa..."<<endl;
							cin>>cpfIN;
						
							if(!(dbAluno.consultar(cpfIN))){
								cout<<"Nenhum aluno encontrado para este CPF"<<endl;
							}
							
							cout<<"1) Digite 1 para voltar.."<<endl;
							cin>>opt1;
							system("cls");
							
							break;
						}
					case 4:// listar todos  os alunos -------- listar todos  os alunos --------
						dbAluno.listar();
						cout<<"1) Digite 1 para voltar.."<<endl;
						cin>>opt1;
						system("cls");
						
						break;
					case 5:
						//voltar;
						{
							system("cls");
							menuPrin = menu.getMenuMenus();
							ImpMenu(menuPrin, "");
							cout<<"Digite o numero da opcao desejada: "<<endl;
							cin>>opt1;
							system("cls");
							break;
						}
					default:
						//default é voltar
						{
							system("cls");
							menuPrin = menu.getMenuMenus();
							ImpMenu(menuPrin, "");	
							cout<<"Digite o numero da opcao desejada: "<<endl;
							cin>>opt1;	
							system("cls");						
							break;
						}
				}
									
				break;
			case 2:
				menuPrin = menu.getMenuDisci();
				ImpMenu(menuPrin, "");
				cout<<"Digite o numero da opcao desejada: "<<endl;
				cin>>opt1;
				system("cls");
				switch(opt1){
					case 1:
						{//cadastrar disciplina ---------- cadastrar disciplina ------- cadastrar disciplina
							string codD, nomD;						
							cout<<"Qual o nome da disciplina ?"<<endl;
							cin>>nomD;
							cout<<"Qual o codigo da disciplina ?"<<endl;
							cin>>codD;
							
							respFun = dbDisc.incluir(codD, nomD);
							
							cout<<endl;
							if(respFun){
								cout<<"Disciplina adicionada com sucesso"<<endl;
								cout<<"2) Digite 2 para voltar.."<<endl;
								cin>>opt1;
								system("cls");
							}else{
								cout<<"Falha ao adicionar a disciplina"<<endl;
								cout<<"2) Digite 2 para voltar.."<<endl;
								cin>>opt1;
								system("cls");
							}
						break;
						}
					case 2://deletar Disciplina  ------- deletar Disciplina ------- deletar Disciplina
						{
							string cD;
							cout<<"Digite o Codigo da disciplina que sera deletado..."<<endl;
							cin>>cD;
							
							if(dbDisc.excluir(cD)){
								cout<<"Disciplina deletada com sucesso"<<endl;
								cout<<"2) Digite 2 para voltar.."<<endl;
								cin>>opt1;
								system("cls");
							}else{
								cout<<"Erro ao deletar a disciplina"<<endl;
								cout<<"2) Digite 2 para voltar.."<<endl;
								cin>>opt1;
								system("cls");
							}
							break;
						}						
					case 3:
						dbDisc.listar();
						cout<<"2) Digite 2 para voltar.."<<endl;
						cin>>opt1;
						system("cls");
						break;
					case 4:
						//voltar;
						{
							system("cls");
							menuPrin = menu.getMenuMenus();
							ImpMenu(menuPrin, "");
							cout<<"Digite o numero da opcao desejada: "<<endl;
							cin>>opt1;
							system("cls");	
							break;
						}
					default:
						{
							system("cls");
							menuPrin = menu.getMenuMenus();
							ImpMenu(menuPrin, "");
							cout<<"Digite o numero da opcao desejada: "<<endl;
							cin>>opt1;
							system("cls");	
							break;
						}
				}	
				break;
			case 3:
				menuPrin = menu.getMenuMatri();
				ImpMenu(menuPrin, "");
				cout<<"Digite o numero da opcao desejada: "<<endl;
				cin>>opt1;
				system("cls");
				switch(opt1){
					case 1://Matricular aluno -- matricular aluno
						{
							string cpf, cDis;

							cout<<"Digite o CPF do Aluno que sera matriculado:"<<endl;
							cin>>cpf;
							cout<<"Digite o codigo da disciplina a ser matriculado: "<<endl;
							cin>>cDis;
							
							if(matriculas.matricular(cpf, cDis)){
								cout<<"3) Digite 3 para voltar.."<<endl;
								cin>>opt1;
								system("cls");
							}
							else{
								cout<<"3) Digite 3 para voltar.."<<endl;
								cin>>opt1;
								system("cls");
							}
							
						break;
						}
					case 2: //desmatricular aluno --- desmatricular aluno
						{
							string cpf, cDis;

							cout<<"Digite o CPF do Aluno que sera desmatriculado:"<<endl;
							cin>>cpf;
							cout<<"De qual disciplina (codigo)? "<<endl;
							cin>>cDis;
							
							if(matriculas.cancelar(cpf, cDis)){
								cout<<"3) Digite 3 para voltar.."<<endl;
								cin>>opt1;
								system("cls");
							}
							else{
								cout<<"3) Digite 3 para voltar.."<<endl;
								cin>>opt1;
								system("cls");
							}
							
						break;
						}
					case 3: // CHECAR MATRICULA --- CHECAR MATRICULA --- CHECAR MATRICULA
						{
						
							string cpf, cDis;					
							cout<<"Digite o cpf do Aluno que deseja consultar.."<<endl;
							cin>>cpf;
							cout<<"Digite o codigo da disciplina.."<<endl;
							cin>>cDis;
							
							matriculas.verifica(cpf, cDis);
								
							cout<<"3) Digite 3 para voltar.."<<endl;
							cin>>opt1;
							system("cls");
							
							break;
						}
					case 4:	//voltar;
						{
							system("cls");
							menuPrin = menu.getMenuMenus();
							ImpMenu(menuPrin, "");
							cout<<"Digite o numero da opcao desejada: "<<endl;
							cin>>opt1;
							system("cls");	
							break;
						}
					default:
						{
							system("cls");
							menuPrin = menu.getMenuMenus();
							ImpMenu(menuPrin, "");
							cout<<"Digite o numero da opcao desejada: "<<endl;
							cin>>opt1;
							system("cls");	
							break;
						}
				}		
				break;
			case 4:
				{
					system("cls");
					menuPrin = menu.getMenuMenus();
					ImpMenu(menuPrin, "");
					ctn = 0;
					break;	
				}
			default:
				{
					menuPrin = menu.getMenuMenus();
					ImpMenu(menuPrin, "");
					ctn = 0;
					break;	
				}
		}
	}
/// FIM DO MENU

	//system("pause");
	return 0;
}

void * ImpMenu(string * pont, string tipo){
	string t  = tipo;
	
	if(tipo == ""){
		for(int i = 0; i < 5; i++){
			cout<<*(pont+i)<<endl;
		}
	}else if(tipo == "alunos"){
		for(int i = 0; i < 6; i++){
			cout<<*(pont+i)<<endl;
		}
	}	

	cout<<endl;
}

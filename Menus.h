#ifndef MENUS_H
#define MENUS_H

#include <string>

using namespace std;

class Menus{
	public:
		Menus();
		string getMenuAluno();
		string getMenuDisci();
		string getMenuMatri();
		string getMenuMenus();
		
		setMenuAluno(string);
		setMenuDisci(string);
		setMenuMatri(string);
		setMenuMenus(string);
		
	private:
		string menuAluno[4];
		string menuDisci[4];
		string menuMatri[4];
		string menuMenus[4];
	
};

#endif 

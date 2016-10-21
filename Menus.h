#ifndef MENUS_H
#define MENUS_H

#include <string>

using namespace std;

class Menus{
	public:
		Menus();
		string *getMenuAluno();
		string *getMenuDisci();
		string *getMenuMatri();
		string *getMenuMenus();
		
		void setMenuAluno();
		void setMenuDisci();
		void setMenuMatri();
		void setMenuMenus();
		
	private:
		string menuAluno[5];
		string menuDisci[4];
		string menuMatri[4];
		string menuMenus[4];
};

#endif 

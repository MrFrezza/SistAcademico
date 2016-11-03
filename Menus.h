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
		string menuAluno[6];
		string menuDisci[5];
		string menuMatri[5];
		string menuMenus[5];
};

#endif 

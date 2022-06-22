#pragma once
#include <iostream>
#include <string.h>
#include"Kopyta.h"
#include"Roga.h"
class Los :public Roga, public Kopyta
{
public:
	char name[255];
	Los(const char* c) {
		strcpy_s(name, c);
	}
	void DisplayInfo(){
		cout << "Name " << name << "\n";
		cout << "Forma " << forma << "\n";
		cout << "Color " << color << "\n";
		cout << "Wes rogov " << wes << "\n";
		cout << "Razmer kopyt " << razmer << "\n";
		cout << "id\t" << Roga::id << "\n";
		cout << "id cop\t" << Kopyta::id << "\n";
	};
};


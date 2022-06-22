#pragma once
#include <iostream>
#include <string.h>
using namespace std;
class Kopyta
{
protected:
	 char forma[25];
	int razmer;
	int id;
public:
	Kopyta() {
		strcpy_s(forma, "Big");
		razmer = 10;
		id = 2;
	}
	Kopyta(char* c, int w) {
		strcpy_s(forma, c);
		razmer = w;
		id = 4;
	}
};


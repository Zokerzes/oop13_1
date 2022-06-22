#pragma once
#include <iostream>
#include <string.h>
using namespace std;
class Roga
{
protected:
	char color[25];
	int wes;
	int id;
public:
	Roga() {
		strcpy_s(color, "Dirty");
		wes = 20;
		id = 6;
	}
	Roga(char* c, int w) {
		strcpy_s(color, c);
		wes = w;
		id = 6;
	}

};


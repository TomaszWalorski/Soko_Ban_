#pragma once
#include <iostream>
#include <stdlib.h>
#include <Windows.h>
#include "static_obj.h"

class gun : public static_obj
{
	void show()
	{
		HANDLE hOut;
		hOut = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hOut, FOREGROUND_BLUE | FOREGROUND_RED );
		std::cout << "V";
	}

};

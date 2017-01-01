//============================================================================
// Name        : chater2_FlowOfControl.cpp
// Author      : Tanvir
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string> //for string
#include <cmath> //for math
#include <cassert> //for asssert



// If statement
/*
int main(int argc, char* argv[])
	{
	double x = -2.0;
	if (x < 0.0)
		{
		x = 0.1;
		}
	std::cout << x;
	return 0;
	}
*/


// if else
/*
int main(int argc, char* argv[])
	{
	int i ;
	std:: cout << "enter the value i\n";
	std:: cin >> i;
	double y;
	if (i > 0)
		{
		y = 2.0;
		}
	else
		{
		//When i <= 0
		y = 10.0;
		}
	std:: cout << y;
	return 0;
	}

*/


//multiple if

int main(int argc, char* argv[])
	{
	int i ;
	std:: cout << "enter the value i\n";
	std:: cin >> i;
	double y;
	if (i > 0)
		{
		y = 2.0;
		}
	else if (i < 0)
		{
		//When i <= 0
		y = 10.0;
		}
	else
		{
		y = 5.0;
		}
	std:: cout << y;
	return 0;
	}



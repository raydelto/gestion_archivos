//============================================================================
// Name        : GestionArchivos.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	ofstream salida("texto.txt", ios_base::app);
	salida << "Es muy muy escribir un archivo en C++ 1" << endl;
	ifstream entrada("texto.txt");
	string linea;
	while(!entrada.eof())
	{
		getline(entrada,linea);
		cout << linea << endl;
	}
	return 0;
}

/**
* @file
* @brief Recursividad – algoritmos de fuerza bruta – algoritmos voraces
* @author Nicolle Montaño<nicollemontano@unicauca.edu.co>
* @copyright MIT license
*/

#include<iostream>
#include<string>

#include "strings.h"

using std::cout;//Salida Estandar
using std::endl;//Fin de linea
using std::cin;// Entrada Estandar
using std::string;//

using strings::contains;


int main (int argc, char *argv[]) {
	string str ="merequetengue";//usar el operador de asignacion
	string pattern("que");//invocar al constructor
	
	cout<< " Algoritmo para determinar si una cadena esta contenida dentro de otra"<<endl;
	
	cout<< " ingrese la cadena:"<<endl;
	std::getline(cin,str);
	cout<< " ingrese el patron:";
	std::getline(cin,pattern);
	cout
		<<str<<" contains "
		<<pattern<<" ? "
		<<(contains(str,pattern,0,0) ? "yes" : "no")
		<<endl;
	
	return 0;
}


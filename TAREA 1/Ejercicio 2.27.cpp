#include <iostream>
using namespace std;
//Ejercicio 2.27
int main() {
	char caracter;
	cout<<"Ingrese un caracter: ";cin>>caracter;
	
	cout<<static_cast<int>(caracter);
	return 0;
}


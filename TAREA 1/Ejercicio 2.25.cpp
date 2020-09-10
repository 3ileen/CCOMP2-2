#include <iostream>
using namespace std;
//Ejercicio 2.25
int main() {
	int a,b,c;
	cout<<"Ingrese un caracter: ";cin>>a;
	cout<<"Ingrese otro caracter: ";cin>>b;
	cout<<"Ingrese otro numero: ";cin>>c;
	
	if (a%c == 0){
		if (b%c == 0){
			cout<<a<<"y"<<b<<"son multiplos de"<<c<<endl;
		}
		else{
			cout<<a<<"y"<<b<<"no son multiplos de"<<c<<endl;
		}
	}
	return 0;
}


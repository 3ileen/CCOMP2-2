#include <iostream>
using namespace std;
//Ejercicio 2.28
int main() {
	int x,a,b,c,d,e;
	cout<<"Ingrese un numero de 5 digitos: ";cin>>x;
	
	a=x/10000;
	x%=10000;
	b=x/1000;
	x%=1000;
	c=x/100;
	x%=100;
	d=x/10;
	x%=10;
	e=x;
	
	cout<<e<<"  "<<d<<"  "<<c<<"  "<<b<<"  "<<a<<endl;
	return 0;
}


#include <iostream>
using namespace std;
//Ejercicio 2.18
int main() {
	int a,b;
	cout<<"Ingrese un numero: ";cin>>a;
	cout<<"Ingrese otro numer: ";cin>>b;
	
	if (a>b){
		cout<<a<<"is larger"<<endl;
	}
	else if(a==b){
		cout<<"These numbers are equal"<<endl;
		
	}
	else{ 
		cout<<b<<"is larger"<<endl;
	}
	return 0;
}


#include <iostream>
using namespace std;
//Problema 2
/*Implementar un programa que solicite un numero entero N  e imprima 
los numeros enteros impares desde de 1 hasta n separados por comas.*/
int main(int argc, char *argv[]) {
	int n,impar;
	cout<<"Ingrese un numero: ";cin>>n;
	for (int i=1;i<=n;i+=2){
			if (i==1){
				cout<<i;
			}
			else{
			cout<<","<<i;	
			}
			
		
	}
	
	return 0;
}


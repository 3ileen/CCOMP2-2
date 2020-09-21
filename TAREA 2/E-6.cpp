#include <iostream>
using namespace std;
/*Ejercicio 6
Los factores primos de 13195 son 5, 7, 13 y 29.
¿Cu´al es el mayor factor primo de 600851475143?*/
int main() {
	int n,mayor=0;
	cout<<"Ingrese un numero: ";cin>>n;
	while (n != 1){
		int i=2;
		while (n % i !=0){
			i++;
		}
		n=n/i;
		if (i>mayor){
			mayor = i;
		}
		
	}	
	cout<<"\nEl mayor factor primo es : "<<mayor<<endl;
	
	
	
	
	return 0;
}


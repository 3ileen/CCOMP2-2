#include <iostream>
using namespace std;
//Ejercicio numero 5
//Implemente un programa que solicite un n´umero n e imprima todos los n´umeros perfectos menores a n.
int main(int argc, char *argv[]) {
	int num;
	cout<<"INgrese un numero: ";cin>>num;
	for(int i=1;i<=num;i++){
		int p=0;
		for(int j=1;j<i;j++){
			if (i%j==0){
				p+=j;
			}
		}
		if (i== p){
			cout<<i<<" ";
		}
	}
		
	
	return 0;
}


#include <iostream>
using namespace std;
//Implemente un programa que solicite un
//numero n e imprima todos los n´umeros primos menores a n.
int main(int argc, char *argv[]) {
	int n;
	
	cout<<"Ingrese un numero: ";cin>>n;
	for (int i=2;i<=n;i++){
		int primo=0;
		for (int j=2;j<=i;j++){
			if (i%j==0){
				primo+=1;
			}
		}
		if (primo == 1){
			cout<<i<<" ";
		}
	}
	
	

	return 0;
}


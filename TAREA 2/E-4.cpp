#include <iostream>
using namespace std;
//Ejercicio 4
int main(int argc, char *argv[]) {
	int n,p=0;
	
	cout<<"Ingrese un numero: ";cin>>n;
	
	for (int i=1;i<n;i++){
		if (n %i == 0) {
			p+= i;
		}
	}
	if (n == p){
		cout<<n<<" si es un numero perfecto"<<endl;
	}
	else {
		cout<<n<<" no es numero perfecto"<<endl;
	}
	return 0;
}


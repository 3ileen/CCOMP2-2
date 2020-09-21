#include <iostream>
using namespace std;
//Problema 1
/*Si se imprimiera todos los numeros naturales menores que 10.
Los cualessean multiplos de 3 o 5,obtendremos 3,5,6,9.
La suma de estos multiplos es 23
Encontrar la suma de todos los multiplos de3 o 5 menores  a 1000000*/
int main(int argc, char *argv[]) {
	int num,y, x,suma=0;
	x=3;
	y=5;
	cout<<"Ingrese un numero: ";cin>>num;
	
	for(int i=0;i < num;i++){
		if (i % 3 == 0 || i%5 == 0){
			suma +=i;
		}
		
	}
	cout<<"La suma es: "<<suma<<endl;
	
	return 0;
}


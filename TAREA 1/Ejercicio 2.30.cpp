#include <iostream>
using namespace std;
//Ejercicio 2.30
int main() {
	int peso;
	float altura,IMC;
	char l,I;
	cout<<"Ingrese su peso: ";cin>>peso;
	cout<<"Ingrese su altura: ";cin>>altura;
	cout<<"Ponga l si quiere su IMC en libras y pulgadas o ponga k si quiere su IMC en kilogramos y metros: ";cin>>l;
	
	if (l=='l'){
		IMC=peso*703/(altura*altura);
	}
	else {
		IMC=peso/(altura*altura);
	}
	cout<<"Su IMC es: "<<IMC<<endl;
	
	if (IMC<18.5){
		cout<<"Peso insuficiente";
	}
	else if ((IMC>18.5) &&(IMC<24.9)){
		cout<<"Normal";
	}
	else if ((IMC>25) && (IMC<29.9)){
		cout<<"Sobrepeso";
	}
	else if (IMC>=30){
		cout<<"Obeso";
	}
	
	return 0;
}


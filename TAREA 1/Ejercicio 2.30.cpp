#include <iostream>
using namespace std;
//Ejercicio 2.30
int main() {
	int peso;
	float altura,IMC,x,y;
	char l,I;
	cout<<"Ponga l si quiere su IMC en libras y pulgadas o ponga k si quiere su IMC en kilogramos y metros: ";cin>>l;
	cout<<"Ingrese su peso: ";cin>>x;
	cout<<"Ingrese su altura: ";cin>>y;
	
	if (l=='l'){
		peso=x*2.2;
		altura=y*0.02;
			
		IMC=peso*703/(altura*altura);
	}
	else {
		
		IMC=x/(y*y);
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



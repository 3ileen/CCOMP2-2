#include <iostream>
#include<math.h> //3^2=pow(3,2)
using namespace std;
//Ejercicio 2.29
int main() {
	cout<<"Face lenght\t\tSuperface area\t\tVolume"<<endl;
	cout<<"of cube(cm)\t\tof cube(cm^2)\t\tof cube(cm^3)"<<endl;
	for (int i=0;i<=4;i++){
		cout<<i<<"\t\t\t"<<6*pow(i,2)<<"\t\t\t"<<pow(i,3)<<endl;
	}
	
	return 0;
}


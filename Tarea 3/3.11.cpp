#include<isotream>

class MotorVehicle {
private:
	int yearOfManufacture;
	int engineCapacity;
	string color;
	string make;
	string fuelType;
public:
	MotorVehicle(int,int,string,string,string);
};

MotorVehicle: : MotorVehicle(int _yearOfManufacture,int _engineCapacity,string _color,string _make,string _fuelType){
	yearOfManufacture = _yearOfManufacture;
	engineCapacity = _engineCapacity;
	color = _color;
	make = _make;
	fuelType = _fuelType;
}

void displayCarDetails(int,int,string,string,string):
	cout<<"Ingrese su capacidad: ";cin>>int;
	cout<<"Ingrese el año: ";cin>>int;
	cout<<"Ingrese el color: ";cin>>string;
	cout<<"Que tipo es: ";cin>>string;
	cout<<"Que hace: ";cin>>string;
	
	cout<<"nombre de miembro: valor de miembro"<<endl;
	cout<<engineCapacity<<" ; "<<int<<endl;
	cout<<yearOfManufacture<<" : "<<int<<endl;
	cout<<color<<" : "<<string<<endl;
	cout<<fuelType<<" : "<<string;
	cout<<make<<" : "<<string;
		
	
	using namespace std;

int main(int argc, char *argv[]) {
	
	return 0;
}

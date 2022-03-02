#include <iostream>
#include "biblioteca.hpp"
using namespace std;
int main() {
	int num1, num2;
	cout<<"SUMA"<<endl;
	cout<<"Ingrese el primer numero"<<endl;
	cin>>num1;
	cout<<"Ingrese el segundo numero"<<endl;
	cin>>num2;
	int ResulS=suma(num1, num2);
	cout<<"El resultado de la suma es: "<< ResulS<<endl;
	cout<<"RESTA"<<endl;
	cout<<"Ingrese el primer numero"<<endl;
	cin>>num1;
	cout<<"Ingrese el segundo numero"<<endl;
	cin>>num2;
	int ResulR=resta(num1, num2);
	cout<<"El resultado de la resta es: "<< ResulR<<endl;
	cout<<"MULTIPLICACION"<<endl;
	cout<<"Ingrese el primer numero"<<endl;
	cin>>num1;
	cout<<"Ingrese el segundo numero"<<endl;
	cin>>num2;
	int ResulM=mult(num1, num2);
	cout<<"El resultado de la multiplicacion es: "<< ResulM<<endl;
	cout<<"DIVISION"<<endl;
	cout<<"Ingrese el primer numero"<<endl;
	cin>>num1;
	cout<<"Ingrese el segundo numero"<<endl;
	cin>>num2;
	int ResulD=div(num1, num2);
	cout<<"El resultado de la division es: "<< ResulD<<endl;
	system ("pause");
}

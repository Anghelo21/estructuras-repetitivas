#include <iostream>
using namespace std;

int main(){
	double num;
	cout<<"Por favor, ingrese un numero: "<<endl;
	cin>> num;
	while (num>=0){
		cout<<"Por favor, ingrese otro numero: "<<endl;
		cin>> num;
	}
	cout<<"Fin de la captura :)"<<endl;
	return 0;
}

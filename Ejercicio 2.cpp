#include <iostream>
using namespace std;

int main(){
	int num;
	cout<<"Por favor, ingrese un numero: ";
	cin>> num;
	while (num>0){
		cout<<"Por favor, ingrese otro numero: ";
		cin>> num;
	}
	cout<<"Fin de la captura"<<endl;
	return 0;
}

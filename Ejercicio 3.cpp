#include <iostream>
using namespace std;

int main(){
	int n;
	int acum=0;
	cout<<"Ingrese la cantidad de los primero numeros naturales a sumar: ";
	cin>> n;
	for (int i=1; i<=n; i++){
		acum= acum+i;
	}
	cout<<"La suma de los primeros "<<n<<" numeros naturales es: "<<endl;
	cout<<acum;
	return 0;
}

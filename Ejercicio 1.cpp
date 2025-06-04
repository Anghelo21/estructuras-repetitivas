#include <iostream>
using namespace std;

int main(){
	int cantidad_multiplos;
	int acum=0;
	cout << "+--------------------------+" << endl;
	cout << "|      MULTIPLOS DE 7      |" <<endl;
	cout << "+--------------------------+" << endl<<endl;
	cout<<"Ingrese la cantidad de multiplos de 7 que quisiera saber: "<<endl;
	cin>> cantidad_multiplos;
	if (cantidad_multiplos<=0){
		cout<<"Por favor, solo ingrese cantidades positivas";
	} else{
	cout<<"Los "<<cantidad_multiplos<<" primeros multiplos de 7 son: "<<endl;
	for (int i=1; i<=cantidad_multiplos; i++){
		acum=acum+7;
		cout<<i<<" -> "<<acum<<endl;
	}
}
	return 0;
}

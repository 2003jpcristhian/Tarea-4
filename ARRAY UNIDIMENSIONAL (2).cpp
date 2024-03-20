#include <iostream>
using namespace std;

int main(){
	int tam=0, suma=0, promedio=0;
	int notas[tam];
	cout<<"Cuantas notas desea ingresar: ";
	cin>>tam;
		for(int i=0; i<tam; i++){
			cout<<"Ingrese Nota: "<<i+1<<":";
			cin>>notas[i];	
		}
		for(int i=0; i<tam; i++){
			suma += notas[i];
			//cout<<notas[i]<<endl;	
		}
		promedio = suma/tam;
		cout<<"El promedio es: "<<promedio<<endl;
	
	return 0;
}

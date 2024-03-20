#include <iostream>
using namespace std;

int main(){
	char nombre[30]; 
	cout<<"Ingrese su Nombre Completo: ";
	//cin>>nombre;
	cin.get(nombre,30);
	cout<<nombre<<endl;
	
	system("pause");
}

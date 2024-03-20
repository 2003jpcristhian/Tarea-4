#include <iostream>
using namespace std;

int main(){
	string nombre; 
	cout<<"Ingrese su Nombre Completo: ";
	//cin>>nombre;
	//cin.get(nombre,30);
	getline(cin,nombre);
	cout<<nombre<<endl;
	
	system("pause");
}

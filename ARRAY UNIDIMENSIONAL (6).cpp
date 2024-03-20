#include <iostream>
using namespace std;

int main(){
	string nombre; 
	int dato;
	cout<<"Ingrese dato: ";
	cin>>dato;
	cin.ignore();
	cout<<"Ingrese su Nombre Completo: ";
	//cin>>nombre;
	//cin.get(nombre,30);
	getline(cin,nombre);
	cout<<nombre<<endl;
	
	system("pause");
}

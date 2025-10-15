#include <iostream>
using namespace std;

int main(){
	
	int numero;
	cout << endl << "ingrese el numero de la tabla que desea consultar: ";
	cin >> numero;
	
	cout << endl << "La tabla seleccionada fue: " << numero << endl;
	
	cout << endl << "-----------------------";
	cout << endl << "Tabla del numero " << numero;
	cout << endl << "-----------------------";
	
	//Miembros variables de operaciones
	int multi_one = numero * 1;
	int multi_two = numero * 2;
	int multi_three = numero * 3;
	
	
	cout << endl << numero << " x 1 = " << multi_one << endl;
	cout << endl << numero << " x 2 = " << multi_two << endl;
	cout << endl << numero << " x 3 = " << multi_three << endl;
	
	return(0);
}

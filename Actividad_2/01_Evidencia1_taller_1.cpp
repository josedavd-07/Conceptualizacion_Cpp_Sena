//este es un ejemplo de comentario
/*
este es otro ejemplo de comentario
otro comentario
*/

#include <iostream> // uso de libreria
#include <cstdlib>
using namespace std; // uso de nombre de espacio

int main()
{
	//Miembros variables declaradas pero no inicializadas
	int a, b;
	
	//input data for the user
	cout << "Ingresa el primer numero"<<endl;
	cin >> a;
	
	cout << "Ingresa el segundo numero"<<endl;
	cin >> b;
	
	int suma = a + b;
	
	cout <<"La suma de los numeros es: "<< suma <<endl;
	cout <<"La resta de los numeros es: "<< a-b <<endl;
	cout <<"La multiplicacion de los numeros es: "<< a*b <<endl;
	cout <<"La division de los numeros es: "<< a/b <<endl;
	cout <<"El residuo es: "<< a%b <<endl;

	system("pause");
	return EXIT_SUCCESS;
}


/*
	<- Implentacion  de sentencias if ->
   
	-- Requerimientos de la aplicación --
	
	* El padre ingresa la edad del hijo para determinar su rango -> int
	
	-- Reglas del programa
	
	*  Edad entre 0 y 6 el niño pertenece al grupo de la primera infancia.
	*  Edad entre 6 y 12 años pertenece al programa de la segunda infancia.
	*  Edad entre 12 y 18  años pertenece al grupo de adolecentes.
	
	-- Flujo de salida de la ejecución del programa. --
	
	-- Jose David Carranza Angarita.
*/

#include <iostream>
using namespace std;


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	//Declaracion de los miembros variables
	int edad;
	
	cout << endl << "Por favor ingrese la edad del nino: ";
	cin >> edad;
	
	if (edad >= 0 && edad < 6)
	{
		cout << endl << "<--> El nino pertenece al programa de la primera infancia." << endl;
	}
	else if (edad >= 6 &&  edad < 12)
	{
		cout << endl << "<--> El nino pertenece al programa de la segunda infancia." << endl;
	}
	else if (edad >= 12 &&  edad < 18)
	{
		cout << endl << "<--> El nino pertenece al grupo de los adolecentes." << endl;
	}
	else
	{
		cout << endl << "<--> Edad no valida en el rango de grupos." << endl;
	}
	
	return 0;
}

#include <iostream>
using namespace std;

int main(){
	
	// Calcular aceleracion de un veh�culo
	// a = (velocidad final - velocidad inicial) / tiempo
	
	//Miembros variable  declarados sin inicializar
	float velocidad_inicial, velocidad_final, tiempo, aceleraccion;
	
	cout << endl << "ingrese por favor la velocidad inicial del vehiculo: ";
	cin >> velocidad_inicial;
	
	cout << endl << "ingrese por favor la velocidad final del vehiculo: ";
	cin >> velocidad_final;
	
	cout << endl << "ingrese por favor el tiempo: ";
	cin >> tiempo;
	
	
	//Formula de c�lcular  la aceleraccion
	aceleraccion = (velocidad_final - velocidad_inicial) / tiempo; 
	
	cout << endl << "La aceleraccion del vehiculo es: " << aceleraccion << endl;
	return(0);
}

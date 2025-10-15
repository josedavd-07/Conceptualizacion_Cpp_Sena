/*
    <- Implementación de las sentencias de repetición ->

    -- Requerimientos de la aplicación --

    * El programa debe solicitar al usuario la cantidad de notas que desea digitar.
    * Luego debe pedir esa cantidad de notas (tipo float).
    * Finalmente, debe calcular y mostrar el promedio de las notas ingresadas.

    -- Reglas del programa --

    * Las notas deben estar en el rango de 0.0 a 5.0.
    * Si alguna nota no está dentro de ese rango, se mostrará un mensaje de error.
    * Debe utilizar una estructura de repetición (for, while o do-while).

    -- Jose David Carranza Angarita.
*/

#include <iostream>
using namespace std;

int main()
{
    int cantidad;
    float nota, suma = 0, promedio;

    cout << endl << "==============================================";
    cout << endl << "     TALLER: IMPLEMENTACION DE REPETICIONES";
    cout << endl << "==============================================" << endl;

    cout << endl << "Digite la cantidad de notas que desea ingresar: ";
    cin >> cantidad;

    // Validar que la cantidad sea positiva
    if (cantidad <= 0)
    {
        cout << endl << "Error: La cantidad de notas debe ser mayor que cero." << endl;
        return 0;
    }

    cout << endl << "Ingrese las notas (entre 0.0 y 5.0):" << endl;

    // Ciclo para leer las notas
    for (int i = 1; i <= cantidad; i++)
    {
        cout << "Nota " << i << ": ";
        cin >> nota;

        if (nota < 0.0 || nota > 5.0)
        {
            cout << "Error: la nota debe estar entre 0.0 y 5.0." << endl;
            i--; // repetir esta iteración
            continue;
        }

        suma += nota; // acumular las notas válidas
    }

    // Calcular promedio
    promedio = suma / cantidad;

    cout << endl << "----------------------------------------------";
    cout << endl << "El promedio de las notas es: " << promedio;
    cout << endl << "----------------------------------------------" << endl;

    cout << endl << "==============================================";
    cout << endl << "     FIN DEL PROGRAMA";
    cout << endl << "==============================================" << endl;

    return 0;
}

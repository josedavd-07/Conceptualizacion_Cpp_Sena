/*
    <- Implementación de sentencias if anidadas ->

    -- Requerimientos de la aplicacion --

    * El profesor necesita determinar si el estudiante aprueba la materia de tecnologia segun el promedio de sus notas.

    -- Reglas del programa --

    * El usuario debe ingresar 4 notas tipo float.
    * Se calcula el promedio de las notas.
    * Si el promedio está entre 3.5 y 5.0 -> "Aprobado".
    * Si el promedio está entre 3.0 y 3.5 -> "No tiene aprobada la materia, pero tiene la oportunidad de recuperar."
    * Si el promedio es menor a 3.0 -> "No aprobado".
    * Si el promedio no está en el rango 0 - 5, se indica que la nota no es válida.

    -- Flujo de salida de la ejecución del programa --

    -- Jose David Carranza Angarita.
*/

#include <iostream>
using namespace std;

int main()
{
    // Declaración de variables
    float nota1, nota2, nota3, nota4, promedio;

    cout << endl << "==============================================";
    cout << endl << "   SISTEMA DE EVALUACION - MATERIA TECNOLOGIA";
    cout << endl << "==============================================" << endl;

    // Entrada de datos por el usuario
    cout << endl << "Ingrese la primera nota: ";
    cin >> nota1;

    cout << "Ingrese la segunda nota: ";
    cin >> nota2;

    cout << "Ingrese la tercera nota: ";
    cin >> nota3;

    cout << "Ingrese la cuarta nota: ";
    cin >> nota4;

    // Cálculo del promedio
    promedio = (nota1 + nota2 + nota3 + nota4) / 4;

    cout << endl << "----------------------------------------------";
    cout << endl << "El promedio del estudiante es: " << promedio;
    cout << endl << "----------------------------------------------" << endl;

    // Condicionales anidadas
    if (promedio >= 0 && promedio <= 5)
    {
        if (promedio >= 3.5)
        {
            cout << endl << "<--> El estudiante ha APROBADO la materia de tecnología." << endl;
        }
        else
        {
            if (promedio >= 3 && promedio < 3.5)
            {
                cout << endl << "<--> En este momento no tiene aprobada la materia de tecnologia,";
                cout << endl << "     pero tiene la oportunidad de RECUPERAR." << endl;
            }
            else
            {
                cout << endl << "<--> El estudiante NO ha aprobado la materia de tecnología." << endl;
            }
        }
    }
    else
    {
        cout << endl << "<--> Error: El promedio no es válido. Debe estar entre 0 y 5." << endl;
    }

    cout << endl << "==============================================";
    cout << endl << "     FIN DEL PROGRAMA";
    cout << endl << "==============================================" << endl;

    return 0;
}

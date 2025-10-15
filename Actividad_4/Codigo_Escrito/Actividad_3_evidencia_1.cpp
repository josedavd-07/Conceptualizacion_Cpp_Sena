/*
    <- Implementación de sentencias if anidadas con repetición ->

    -- Requerimientos de la aplicación --

    * El profesor necesita determinar si el estudiante aprueba la materia de tecnología según el promedio de sus notas.
    * El sistema debe permitir ingresar las notas de varios estudiantes hasta que el profesor decida terminar.

    -- Reglas del programa --

    * El usuario debe ingresar 4 notas tipo float.
    * Se calcula el promedio de las notas.
    * Si el promedio está entre 3.5 y 5.0 -> "Aprobado".
    * Si el promedio está entre 3.0 y 3.5 -> "No tiene aprobada la materia, pero tiene la oportunidad de recuperar."
    * Si el promedio es menor a 3.0 -> "No aprobado".
    * Si el promedio no está en el rango 0 - 5, se indica que la nota no es válida.
    * Al finalizar la evaluación de un estudiante, se pregunta si desea ingresar otro.

    -- Jose David Carranza Angarita.
*/

#include <iostream>
using namespace std;

int main()
{
    // Declaración de variables
    float nota1, nota2, nota3, nota4, promedio;
    int continuar = 1;

    cout << endl << "==============================================";
    cout << endl << "   SISTEMA DE EVALUACION - MATERIA TECNOLOGIA";
    cout << endl << "==============================================" << endl;

    // Ciclo que se repite mientras el profesor desee continuar
    while (continuar == 1)
    {
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
                    cout << endl << "<--> En este momento no tiene aprobada la materia de tecnología,";
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

        // Preguntar si desea continuar
        cout << endl << "¿Desea ingresar las notas de otro estudiante?" << endl;
        cout << "Digite 1 para continuar o 0 para salir: ";
        cin >> continuar;

        // Validar opción
        while (continuar != 0 && continuar != 1)
        {
            cout << "Opción no válida. Ingrese 1 para continuar o 0 para salir: ";
            cin >> continuar;
        }
    }

    cout << endl << "==============================================";
    cout << endl << "       FIN DEL PROGRAMA - HASTA LUEGO";
    cout << endl << "==============================================" << endl;

    return 0;
}

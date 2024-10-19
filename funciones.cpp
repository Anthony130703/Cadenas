#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char nombre[]= "Anthony";
    char nombre2[20];
    char nombre1[] = "Anthony";
    char nombre3[] = "Jesus";

    //ESTA FUNCION COPIA EN NOMBRE2 EL CONTENIDO DE NOMBRE
    strcpy(nombre2, nombre);

    //ESTA FUNCION COMPARA CADENAS
    if(strcmp(nombre, nombre3)==0)
    {
        cout << "Ambas cadenas son iguales" << endl;
    }
    else
    {
        cout << "Las cadenas no son iguales" << endl;
    }

    cout << nombre2 << endl;

    return 0;
}
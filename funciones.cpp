#include <iostream>
#include <string.h>
#include <stdlib.h> //PARA LA FUNCION atoi() y atof()


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

    //ESTA FUNCION ES PARA INVERTIR UNA CADENA
    strrev(nombre);
    cout << nombre << endl;

    //PASAR UNA PALABRA A MAYUSCULA
    char cat[] = "dolores";
    strupr(cat);
    cout << cat <<endl;
    
    //PASAR UNA PALABRA A MINISCULAS
    strlwr(cat);
    cout << cat <<endl;

    //TRANSFORMAR UNA CADENA A NUMEROS
    char cad1 []= "123";
    char cad2 []= "125.36";
    auto numero = atoi(cad1);
    auto numero2 = atof(cad2);
    cout << numero << endl;
    cout << numero2 << endl;



    return 0;
}
#include<iostream>
#include<string>
#include<cstring>

using namespace std;
int main()
{
    char palabra[40];
    int longitud=0;
    cout<<"Ingrese una palabra: ";
    cin.getline(palabra,40,'\n');

    longitud=strlen(palabra);
    cout<<"longitud de la cadena es: "<<longitud;
    return 0;
}
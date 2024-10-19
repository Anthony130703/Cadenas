#include<iostream>
#include<string>
using namespace std;
int main()
{
    char palabra[]= "Anthony";
    char palabra2[]= {'A','n','t','h','o','n','y'};
    char nombre[20];
    string palabra3;
    cout<<"digite una oracion: "<<endl;
    cin>>palabra3;
    
    cout<<"\n Digite su nombre: "<<endl;
    //con el cin.getline(nombre_de_la_variable_a_guardar,cantidad_de_memoria_a_guardar,cuando_termina)
    cin.getline(nombre,20,'f');
    cout<<nombre<<endl;
    cout<<palabra3;
    return 0;
}
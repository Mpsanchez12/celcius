
/*1)Declaramos las variables celcius,Fahrenheit.
  2)Le pedimos a el usuario que ingrese la temperatura en grados Celsius
  Leer el valor ingresado por el usuario y alamacenarlo en la variable Celcius
  3)Pasamos la conversion de los grados celcius a Faherenheit usando la formula
  4)Mostramos el resultado de la conversion
  */



#include <iostream>
using namespace std;
int main (){

double celcius,Fahrenheit;
cout<<"Ingresar los grados Celcius"<<endl;
cin>>celcius;
Fahrenheit=(celcius*9/5)+32;
cout<<"La temperatura en grados Fahrenheit es"<<Fahrenheit<<endl;








return 0;
}

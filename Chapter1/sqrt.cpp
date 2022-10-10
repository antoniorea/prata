/*
*   Suma de las raices cuadradas de dos numeros introducidos por el usuario:
*   read two numbers   sums their  square roots and write the sum
*   C++11 Support in GCC
*   $g++ -o sqrt -std=c++0x -Wall sqrt.C -lm
*   C++17 Support in GCC
*   $g++ -o sqrt -std=c++17 -Wall sqrt.C -lm
*/
#include <iostream>                 // incluye las clases istream y ostream de las que cin y cout son objetos 
#include <cmath>                    // este archivo incluye la lib. necesaria para utilizar la funcion sqrt()
using namespace std;                //  podria usarse asi  using std::cout; using std::cin; 
double suma(double, double);        // prototipo de la funcion suma()

int main()
{    
    cout << " Introduzca dos numeros " << endl;
    double n1 , n2 , n3 , n4;
    cin >> n1 >> n2;

    n3 = sqrt(n1);       
    n4 = sqrt(n2);

    cout << " La raiz cudrada de \t" << n1 << " es \t" << n3 << endl; 
    cout << " La raiz cudrada de \t" << n2 << " es \t" << n4 << endl;
    cout << " La suma de las dos raices es " << suma( n3 , n4 ) << endl;  // llamada a la funcion suma()
    return 0;
}

double suma(double p1, double p2)                   // definicion de la funcion suma()
{
    return p1 + p2 ;
}
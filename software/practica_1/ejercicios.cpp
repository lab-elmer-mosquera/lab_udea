#include "ejercicios.h"
#include <iostream>

using std::cin;
using std::cout;
using std::endl;


/*

    Ejercicio #01

    Escriba un programa que pida dos numeros A y B e imprima en pantalla el residuo de la division A/B.
        Por ejemplo, si se ingresan 8 y 3 se debe imprimir:
            El residuo de la division 8/3 es: 2

*/

void ejercicio_1(){
    cout << "Un programa que pide dos numeros A y B e imprime en pantalla el residuo de la division A/B\n";

    int a{}, b{}, residuo{};

    cout << "Digite el numero A: ";
    cin >> a;
    cout << "Digite el numero B: ";
    cin >> b;

    residuo = a%b; // Si se esta leyendo pero Qt a veces tiene problemas

    cout << "El residuo de la division " << a << "/" << b << " es: " << residuo << endl;
}

/*

    Escriba un programa que pida un mumero N e imprima en pantalla si es par o impar.
        Por ejemplo, si se ingresa 5 se debe imprimir:
            El numero 5 es impar

 */

void ejercicio_2() {

    cout << "Un programa que pide un mumero N e imprime en pantalla si es par o impar.\n";

    int n{};

    cout << "Digite un numero natural: ";
    cin >> n;

    if ((n%2)==0) {
        cout << "El numero " << n << " es par" << endl;
    } else {
        cout << "El numero " << n << " es inpar" << endl;
    }
}


/*
    Escriba un programa que pida dos numeros A y B e imprima en pantalla el mayor entre ellos.
        Por ejemplo, si se ingresan 7 y 3 se debe imprimir:
            El mayor es 7
 */

void ejercicio_3(){
    cout << "un programa que pide dos numeros A y B e imprime en pantalla el mayor entre ellos.\n";

    float a{}, b{}, mayor{};

    cout << "Digire un numero A: ";
    cin >> a;
    cout << "Digire un numero B: ";
    cin >> b;

    mayor = a;

    if (b>a) {
        mayor = b;
    }

    cout << "El mayor es: " << mayor << endl;

}

/*
    Escriba un programa que pida dos numeros A y B e imprima en pantalla el menor.
        Por ejemplo, si se ingresan 7 y 3 se debe imprimir:
            El menor es 3

*/

void ejercicio_4(){
    cout << "un programa que pide dos numeros A y B e imprime en pantalla el menor.\n";

    float a{}, b{}, menor{};

    cout << "Digite un numero A: ";
    cin >> a;
    cout << "Digite un numero B: ";
    cin >> b;

    menor = a;

    if (b<a){
        menor = b;
    }

    cout << "El menor es: " << menor << endl;
}


/*

    Escriba un programa que pida dos numeros A y B e imprima en pantalla la division A/B con redondeo.
        Por ejemplo, si se ingresan 8 y 3
            se debe imprimir: 8/3 = 3
        Si se ingresan 7 y 3
            se debe imprimir: 7/3=2

 */


void ejercicio_5(){
    cout << "un programa que pide dos numeros A y B e imprime en pantalla la division A/B con redondeo \n\tRedondea hacia arriba si divicion tiene decimal entre .5 .9999... \n\tRendondea hacia abajo si divicion tiene decimal entre .0 y .4";

    float a{}, b{}, division{};

    cout << "Digie un numero A: ";
    cin >> a;
    cout << "Digie un numero B: ";
    cin >> b;

    division = (a/b)+0.5;

    cout << a << "/" << b << "=" << (int)division << endl;
}


/*

    Escriba un programa que pida dos numeros A y B e imprima en pantalla la potencia A^B, sin hacer
    uso de librerıas matematicas.
        Por ejemplo, si se ingresan 5 y 3 se debe imprimir:
            5^3=125

 */

void ejercicio_6(){
    cout << "un programa que pide dos numeros A y B e imprime en pantalla la potencia A^B, sin hace uso de librerıas matematicas\n";

    int a{}, b{}, poAB{};

    cout << "Digite un numero A: ";
    cin >> a;

    cout << "Digite un numero B: ";
    cin >> b;

    poAB = a;

    for (int var = 1; var < b; var++) {
        poAB*=a;
    }

    cout << a << "^" << b << "=" << poAB << endl;
}



/*
    Escriba un programa que pida un numero N e imprima en pantalla la suma de todos los numeros
    entre 0 y N, incluyendo N.
        Por ejemplo, si se ingresa 5: (1+2+3+4+5=15), se debe imprimir:
            La sumatoria desde 0 hasta 5 es: 15

*/


void ejercicio_7(){
    cout << "un programa que pide un numero N e imprime en pantalla la suma de todos los numeros entre 0 y N, incluyendo N.\n";

    int n{}, sumatoria{};


    cout << "Digite un numero natural: ";
    cin >> n;

    for (int var = 0; var <= n; var++) {
        sumatoria += var;
    }

    cout << "La sumatoria desde 0 hasta " << n << " es: " << sumatoria << endl;
}


/*

    Escriba un programa que pida un numero N e imprima en pantalla el resultado de su factorial.
        Por ejemplo, si se ingresa 5: (5!=1·2·3·4·5=120), se debe imprimir:
            5!=120

*/

void ejercicio_8(){
    cout << "un programa que pide un numero N e imprime en pantalla el resultado de su factorial";

    int n{}, factorial = 1;

    cout << "Digite un numero natural: ";
    cin >> n;

    for (int var = 1; var <= n; var++){
        factorial*=var;
    }

    cout << n << "!=" << factorial << endl;
}


/*

    Escriba un programa que pida un numero N e imprima en pantalla el perımetro y el area de un
    cırculo con radio N. Use 3.1416 como aproximacion del numero π.
        Por ejemplo, si se ingresa 1 se debe imprimir:
            Perimetro: 6.28352
            Area: 3.1416

*/


void ejercicio_9(){
    cout << "un programa que pide un numero N e imprime en pantalla el perımetro y el area de un cırculo con radio N\n";


    const double PI = 3.1416;

    int n{};

    cout << "Digite un numero natural: ";
    cin >> n;

    double area = PI*n*n, perimetro = 2*PI*n;

    cout << "Perimetro: " << perimetro;
    cout << "\nArea: " << area << endl;
}

/*


    Escriba un programa que pida un numero N e imprima en pantalla todos los multiplos de dicho
    numero entre 1 y 100. Por ejemplo, si se ingresa 33 se debe imprimir:
        Multiplos de "33" menores que 100:
        33
        66
        99


*/

void ejercicio_10(){
    cout << "un programa que pide un numero N e imprime en pantalla todos los multiplos de dicho numero entre 1 y 100\n";

    int n{};

    cout << "Ingrese un numero natural: ";
    cin >> n;

    cout << "Multiplos de \"" << n << "\" menores que 100";
    for (int var = 1; var <= 100; var++){
        if (var%n==0){
            cout << "\n" << var;
        }
    }
    cout<<endl;
}
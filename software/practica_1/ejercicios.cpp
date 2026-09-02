#include "ejercicios.h"
#include <iostream>

using std::cin;
using std::cout;
using std::endl;


/*

    Ejercicio #01

    Un programa que pida dos numeros A y B e imprima en pantalla el residuo de la division A/B.
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

    Un programa que pida un mumero N e imprima en pantalla si es par o impar.
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
    Un programa que pida dos numeros A y B e imprima en pantalla el mayor entre ellos.
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
    Un programa que pida dos numeros A y B e imprima en pantalla el menor.
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

    Un programa que pida dos numeros A y B e imprima en pantalla la division A/B con redondeo.
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

    Un programa que pida dos numeros A y B e imprima en pantalla la potencia A^B, sin hacer
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
    Un programa que pida un numero N e imprima en pantalla la suma de todos los numeros
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

    Un programa que pida un numero N e imprima en pantalla el resultado de su factorial.
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

    Un programa que pida un numero N e imprima en pantalla el perımetro y el area de un
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


    Un programa que pida un numero N e imprima en pantalla todos los multiplos de dicho
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


/*

    Un programa que pida un numero N e imprima en pantalla su tabla de multiplicar hasta
    10×N.

*/


void ejercicio_11(){
    cout << "un programa que pide un numero N e imprime en pantalla su tabla de multiplicar hasta 10×N\n";

    int n{};

    cout << "Ingrese un numero natural: ";
    cin >> n;

    for (int i = 1; i <= 10; i++){
        cout << i << "x" << n << " = " << (i*n) << "\n";
    }

    cout << endl;
}

/*

    Un programa que pida un numero N e imprima todas las potencias desde N^1 hasta N^5.

*/


void ejercicio_12(){
    cout << "un programa que pide un numero N e imprime todas las potencias desde N^1 hasta N^5\n";

    int n{}, potencia{};

    cout << "Ingrese un numero natural: ";
    cin >> n;
    potencia = n;

    for (int i = 1; i <= 5; i++){
        cout << n << "^" << i << "=" << potencia << "\n";
        potencia*=n;
    }
    cout << endl;
}

/*

    un programa que pida un numero N e imprima todos los divisores de N

*/

void ejercicio_13(){
    cout << "Un programa que pide un numero N e imprime todos los divisores de \n";

    int n{};

    cout << "Ingrese un numero natual: ";
    cin >> n;

    cout << "Los divisores de " << n << " son: \n";
    for (int i = 1; i <= n; i++){
        if ((n%i)==0){
            cout << i << "\n";
        }
    }

    cout << endl;
}

/*

    Un programa que imprima dos columnas paralelas, una con los numeros del 1 al 50 y otra
    con los numeros del 50 al 1.

*/

void ejercicio_14(){
    cout << "Un programa que imprima dos columnas paralelas, una con los numeros del 1 al 50 y otra con los numeros del 50 al 1.\n";

    for (int sube = 1, baja = 50; sube <= 50; sube++, baja--){
        cout << sube << " " << baja << "\n";
    }

    cout << endl;

}

/*

    Un programa que pide al usuario que ingrese numeros. Una vez se ingrese el numero cero,
    se debe imprimir en pantalla la suma de todos los numeros ingresados.

*/
void ejercicio_15(){
    cout << "Un programa que pide al usuario que ingrese numeros. Una vez se ingrese el numero cero, se debe imprimir en pantalla la suma de todos los numeros ingresados.\n";

    int input{}, sumatoria{};

    do {
        cout << "Ingrese un numero: ";
        cin >> input;
        sumatoria+=input;
    } while(input!=0);

    cout << "El resultado de la sumatoria es: " << sumatoria << endl;
}

/*

    Un programa que pida al usuario que ingrese numeros. Una vez se ingrese el numero cero,
    se debe imprimir en pantalla el promedio de los numeros ingresados (sin incluir el cero).

 */
void ejercicio_16(){
    cout << "un programa que pida al usuario que ingrese numeros. Una vez se ingrese el numero cero, se debe imprimir en pantalla el promedio de los numeros ingresados (sin incluir el cero).\n";

    int n{}, promedio{}, auxCount{};

    do {
        cout << "Ingrese un numero: ";
        cin >> n;

        promedio += n;
        if (n == 0) break;
        auxCount++;

    } while (true);

    promedio /= auxCount;

    cout << "El promedio es: " << promedio << endl;

}

/*

    un programa que pida al usuario que ingrese numeros. Una vez se ingrese el numero cero,
    se debe imprimir en pantalla el mayor de todos los numeros ingresados.

*/
void ejercicio_17(){
    cout << "un programa que pida al usuario que ingrese numeros. Una vez se ingrese el numero cero, se debe imprimir en pantalla el mayor de todos los numeros ingresados.\n";

    int n{}, mayor{};

    do {
        cout << "Ingrese un numero: ";
        cin >> n;

        if (n == 0) break;
        mayor = n > mayor ? n : mayor;

    } while (true);

    cout << "El numero mayor fue: " << mayor << endl;
}

/*

    Un programa que pida un numero N e imprima si es o no un cuadrado perfecto

*/
void ejercicio_18(){
    cout << "Un programa que pida un numero N e imprima si es o no un cuadrado perfecto\n";

    int n{};
    cout << "Digite un numero natural: ";
    cin >> n;

    for (int i = 1, auxImpar = 1, auxCuadrado = 1; i <= n/2; i++, auxImpar+=2, auxCuadrado+=auxImpar){
        if (auxCuadrado == n && (i*i)== n){
            cout << n << " es un cuadrado perfecto" << endl;
            return;
        }
        if ((i*i)>n) {
            break;
        }
    }

    cout << n << " NO es un cuadrado perfecto" << endl;
}

/*

    Un programa que pida un número N e imprima si es o no un número primo.

    Por ejemplo, si se ingresa 7 se debe imprimir:
    7 es un número primo.

    Y si se ingresa 8 se debe imprimir:
    8 NO es un número primo.

*/
void ejercicio_19(){
    cout << "Un programa que pide un número N e imprima si es o no un número primo\n";

    int n{};

    cout << "Ingrese un numero natural: ";
    cin >> n;

    for (int i = 1; i < n; i++) {
        if (n%i==0 && i!=n && i>1){
            cout << n << " NO es un número primo" << endl;
            return;
        }
    }
    cout << n << " es un número primo" << endl;
}

/*

    Un programa que pida un número N e imprima si es o no un palíndromo (se lee igual de derecha a izquierda y de izquierda a derecha).

    Por ejemplo, si se ingresa 121, se debe imprimir:
    121 es un número palíndromo.

    Y si se ingresa 123 se debe imprimir:
    123 NO es un número palíndromo.

*/
void ejercicio_20(){
    cout << "Un programa que pide un número N e imprime si es o no un palíndromo (se lee igual de derecha a izquierda y de izquierda a derecha).\n";

    char input[10]{}, auxInverido[10]{};
    int auxCoun{};

    cout << "Ingrese un numero natural: ";
    cin >> input;

    for (char c : input){
        if (c == 0)
            break;
        auxCoun++;
        if (c >= '0' && c <= '9')
            continue;
        cout << "entrada invalida" << endl;
        return;
    }

    for (int j = auxCoun-1, it{}; j > 0; j--, it++) {
        auxInverido[it] = input[j];
        cout << auxInverido << "\n";
        if (input[it] != auxInverido[it]){
            cout << input << " NO es un número palíndromo." << endl;
            return;
        }
    }
    cout << input << " es un número palíndromo." << endl;
    return;
}

/*

    Un programa que pida un carácter C; si es una letra, la debe convertir de mayúscula a minúscula (debe hacer lo mismo en el sentido contrario) e imprimirla.

    Por ejemplo, si se ingresa B, se debe imprimir:
    Letra convertida: b

    Y si se ingresa k se debe imprimir:
    Letra convertida: K

*/
void ejercicio_21(){
    cout << "Un programa que pida un carácter C; si es una letra, la debe convertir de mayúscula a minúscula (debe hacer lo mismo en el sentido contrario) e imprimirla.\n";

    char c{}, s{};

    cout << "Ingrese una letra: ";
    cin >> c;

    if (c >= 'a' && c <= 'z')
        s= c - 32;
    else if (c >= 'A' && c <= 'Z')
        s= c + 32;
    else {
        cout << "entrada invalida" << endl;
        return;
    }

    cout << "etra convertida: " << s << endl;
}

/*

    Un programa que pida una cantidad entera de segundos y la imprima en formato horas:minutos:segundos.

    Por ejemplo, si se ingresa 7777 se debe imprimir:
    2h:9m:37s

*/
void ejercicio_22(){
    cout << "Un programa que pide una cantidad entera de segundos y la imprime en formato horas:minutos:segundos.\n";

    int seg{};

    cout << "Ingrese una cantidad entera de segundos: ";
    cin >> seg;

    cout << seg/3600 << "h:";
    seg%=3600;
    cout << seg/60 << "m:";
    seg%=60;
    cout << seg << "s" << endl;
}

/*

    Un programa que pida dos números A y B e imprima en pantalla el mínimo común múltiplo entre los dos.

    Por ejemplo, si se ingresan 4 y 6, se debe imprimir:
    El MCM de 4 y 6 es: 12


*/
void ejercicio_23(){
    cout << "Un programa que pida dos números A y B e imprima en pantalla el mínimo común múltiplo entre los dos.\n";

    int n[2] = {65,66};

    for (int i{}; i < 2; i++){
        cout << "Ingrese el numero " << (char)n[i] << ": ";
        cin >> n[i];
    }

    for (int i = 1; i <= (n[0]*n[1]); i++) {
        if (i%n[0]==0 && i%n[1]==0){
            cout << "El MCM de " << n[0] << " y " << n[1] << " es: " << i << endl;
            return;
        }
    }
}

/*

    Un programa que pida un número entero e imprima un cuadrado de dicho tamaño; los bordes del cuadrado deben estar hechos con el carácter '+' y el interior vacío.

    Por ejemplo, si se ingresa 4 se debe imprimir:
    ++++
    +  +
    +  +
    ++++


*/
void ejercicio_24(){
    cout << "Un programa que pida un número entero e imprime un cuadrado de dicho tamaño; los bordes del cuadrado deben estar hechos con el carácter '+' y el interior vacío.\n";

    int n{};

    cout << "Digite un numero entero: ";
    cin >> n;

    if (n<0){
        cout << "entrada invalida" << endl;
        return;
    }

    for (int i = 1; i <= n; i++) {
        cout << "+";
    }
    cout << "\n";
    for (int i = 1; i <= n-2; i++) {
        cout << "+";
        for (int j = 1; j <= n-2; j++) {
            cout << " ";
        }
        cout << "+\n";
    }
    for (int i = 1; i <= n; i++) {
        cout << "+";
    }
    cout << endl;
}

/*

    Un programa que pida un número N e imprima en pantalla la cantidad de dígitos de N.

    Por ejemplo, si se ingresa 1234, se debe imprimir:
    1234 tiene 4 dígitos.


*/
void ejercicio_25(){
    cout << "Un programa que pide un número N e imprime en pantalla la cantidad de dígitos de N.\n";

    char input[15]{};

    int auxCoun{};

    cout << "Ingrese un numero natural: ";
    cin >> input;

    for (char c : input){
        if (c == 0)
            break;
        auxCoun++;
        if (c >= '0' && c <= '9')
            continue;
        cout << "entrada invalida" << endl;
        return;
    }

    cout << input << " tiene " << auxCoun << " dígitos" << endl;
}

/*

    Un programa que pida tres números e imprima el tipo de triángulo (isósceles, equilátero, escaleno) que se formaría si sus lados tienen la longitud definida por los números ingresados. Tenga en cuenta el caso en que los números no forman un triángulo.

    Por ejemplo, si se ingresan 3, 3 y 5, se debe imprimir:
    Se forma un triángulo isósceles.

    Si se ingresan 3, 3 y 6, se debe imprimir:
    Las longitudes ingresadas no forman un triángulo.

*/
void ejercicio_26(){
    cout << "Un programa que pide tres números e imprimr el tipo de triángulo (isósceles, equilátero, escaleno) que se formaría si sus lados tienen la longitud definida por los números ingresados. Tenga en cuenta el caso en que los números no forman un triángulo.\n";

    int n[3]{};

    for (int i = 0; i < 3; i++) {
        cout << "Ingrese el " << i+1 << " numero: ";
        cin >> n[i];
    }

    if (!((n[2] + n[0] > n[1]) && (n[2] + n[1] > n[0]) && (n[0] + n[1] > n[2]))){
        cout << "los números no forman un triángulo" << endl;
        return;
    }

    if (n[2] == n[0] && n[2] == n[1]){
        cout << "Se forma un triángulo equilátero" << endl;
        return;
    }
    if ((n[2] == n[0]) || (n[2] == n[1]) || (n[0] == n[1])){
        cout << "Se forma un triángulo isósceles" << endl;
        return;
    }

    cout << "Se forma un triángulo escaleno" << endl;
}

/*

    Un programa que actúe como una calculadora con operaciones de suma, resta, multiplicación y división; el usuario debe ingresar los operandos y la operación a realizar.

    Por ejemplo, si se ingresan 3, + y 5 se debe imprimir:
    3+5=8


*/
void ejercicio_27(){
    cout << "Un programa que actúa como una calculadora con operaciones de suma, resta, multiplicación y división; el usuario debe ingresar los operandos y la operación a realizar.\n";

    int n[2]{};
    char s{};

    cout << "Digite el primer numero: ";
    cin >> n[0];
    cout << "Digite la operacion\n + (sumar)\n - (restar)\n * (multiplicar)\n / (dividir)\n> ";
    cin >> s;

    // cout << "Digite una operacion (eje: 3+5): ";
    // cin >> n[0] >> s >> n[1];

    if (s != '+' && s != '-' && s != '*' && s != '/') {cout << "operacion invalida" << endl; return;}

    cout << "Digite el segundo numero: ";
    cin >> n[1];

    cout << n[0] << s << n[1] << "=";

    switch (s) {
    case '+':
        cout << n[0]+n[1] << endl;
        break;
    case '-':
        cout << n[0]-n[1] << endl;
        break;
    case '*':
        cout << n[0]*n[1] << endl;
    default:
        cout << n[0]/n[1] << endl;
        break;
    }

}

/*

    Un programa que encuentre el valor aproximado de π con base en la siguiente suma infinita:

    π = 4 * (1/1 - 1/3 + 1/5 - 1/7 + 1/9 - ...)

    El usuario debe ingresar el número de elementos usados en la aproximación.

    Por ejemplo, si se ingresa 3, π = 4(1 - 1/3 + 1/5) = 3.46667, por lo que debe imprimirse:
    pi es aproximadamente: 3.46667

*/
void ejercicio_28(){
    cout << "Un programa que encuentre el valor aproximado de π con base en la siguiente suma infinita: π = 4 * (1/1 - 1/3 + 1/5 - 1/7 + 1/9 - ...)\n";

    float n{}, aproPi{};
    cout << "Digite un numero natural: ";
    cin >> n;

    if (!(n>0)){
        cout << "entrada invalida" << endl;
        return;
    }

    for (int i = 1, auxInpar = 1; i <= n; i++, auxInpar+=2) {
        if (i%2==0)
            aproPi-=(1/(float)auxInpar);
        else
            aproPi+=(1/(float)auxInpar);
    }

    aproPi*=4;

    cout << "pi es aproximadamente: " << aproPi << endl;
}

/*

    Un programa que adivine un número A (entre 0 y 100) seleccionado por el usuario (el número NO se ingresa al programa). El programa imprimirá en pantalla un número B y el usuario usará los símbolos >, < e = para indicarle al programa si B es mayor, menor o igual que A, respectivamente. El proceso se repite hasta acertar.

*/
void ejercicio_29(){
    cout << "Un programa que adivine un número A (entre 0 y 100) seleccionado por el usuario (el número NO se ingresa al programa). El programa imprimirá en pantalla un número B y el usuario usará los símbolos >, < e = para indicarle al programa si B es mayor, menor o igual que A, respectivamente. El proceso se repite hasta acertar.\n\n";

    char c{};
    float auxInput{};

    cout << "Piensa en un numero entre 0 y 100\nDigita 1 cuando lo tengas: ";
    cin >> auxInput;

    if (auxInput != 1){
        cout << "Entrada invalida" << endl;
        return;
    }


    for (float limS = 100+1, limI = 0, calculado{}, sugerido = 50; true; c = 0) {

        cout << "El numero es " << (int)sugerido << "?\n";

        cout << "Si acerte digita \"=\"\nsi es mayor ingresa \">\"\n si es menor ingresa \"<\"\n> ";
        cin >> c;

        if (c!='<' && c!='>' && c!='='){
            cout << "entrada ivalida" << endl;
            continue;
        }

        if (c=='>')
            limI = sugerido;
        if (c=='<')
            limS = sugerido;
        if (c == '=')
            break;


        calculado = (limS - limI)/2;
        sugerido = limS - calculado;


    }

    if (c=='='){
        cout << "ACERTE!, GRACIAS POR JUGAR\nHASTA LUEGO!" << endl;
        return;
    }


    cout << "error desconocido" << endl;

}
void ejercicio_30(){
        ejercicio_pendiente(30);
}

void ejercicio_pendiente(int n) {
    cout << "El ejercicio " << n << " no ha sido desarrollado";
}

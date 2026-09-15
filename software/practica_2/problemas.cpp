#include <iostream>
#include "problemas.h"
#include "libs/consola.h"
#include "libs/cadena.h"

using std::cout, std::cin, std::endl;


/*

    Un programa que que usa arreglos y ciclos para determinar combinacion mınima de billetes y monedas
    para una cantidaddada. Los billetes disponibles son: $50.000, $20.000, $10.000, $5.000, $2.000,
    $1.000; las monedas:
    500, 200, 100, 50. Si no es posible distribuir la cantidad exacta entre las denominaciones
    disponibles,
    mostrar el faltante. Por ejemplo, para 47810:
        50000:0
        20000:2
        10000:0
        5000 :1
        2000 :1
        1000 :0
        500 :1
        200 :1
        100 :1
        50 :0
        Faltante:10

*/
void problema_1(){
    cout <<"Un programa que usa arreglos y ciclos para determinar la combinacion mınima de billetes y monedas\npara una cantidad dada.\nLos billetes disponibles son:\n- $50.000 - $20.000 - $10.000 - $5.000 - $2.000 - $1.000 \nlas monedas:\n- 500 - 200 - 100 - 50.\n";

    int n{}, reparto[11][2] = {{50000,0},{20000,0},{10000,0},{5000,0},{2000,0},{1000,0},{500,0},{200,0},{100,0},{50,0},{1,0},};

    cout << "Ingrese un numero natural\n";
    Input_Int_Range(1, 2147483647, n);

    for (int resto = n, it{}; it <= 10; it++) {
        reparto[it][1] = resto/reparto[it][0];
        resto %= reparto[it][0];
        if (it != 10)
            cout << reparto[it][0];
        else
            cout << "Faltante";
        cout << ":" << reparto[it][1] << "\n";
    }

}

void problema_2(){
    problema_pendiente();
};

/*

    un programa que compare 2 cadenas de caracteres y retorne verdadero si son iguales y falso
    en caso contrario. Utilice arreglos de char. Tenga en cuenta la longitud del arreglo y el carácter
    que indica la finalización de una cadena de caracteres.

*/
void problema_3(){

    cout << "un programa que compare 2 cadenas de caracteres y retorne verdadero si son iguales y falso"
            "\nen caso contrario. Utilice arreglos de char. Tenga en cuenta la longitud del arreglo y el"
            "\ncarácter que indica la finalización de una cadena de caracteres.\n";

    char string1[100], string2[100];

    cout << "Ingrese la cadena 1\n>> ";
    cin >> string1;
    cout << "Ingrese la cadena 2\n>> ";
    cin >> string2;

    if (StringsAreEquals(string1,string2)){
        cout << "Las cadenas son iguales" << endl;
        return;
    }

    cout << "Las cadenas son diferentes" << endl;
};

void problema_4(){
    problema_pendiente();
};


/*

    Un programa que utiliza una función que recibe un número entero (int) y lo convierte a cadena de
    caracteres. Usando parámetros por referencia para retornar la cadena.

*/
void problema_5(){
    cout << "Un programa que utiliza una función que recibe un número entero (int) y lo convierte a"
            "\ncadena de caracteres. Usando parámetros por referencia para retornar la cadena.\n";

    int n{};
    char string[12];

    cout << "Ingrese el numero entero a convertir\n";
    Input_Int_Range(-2147483647, 2147483647, n);

    // Funcion de conversion
    IntToChar(n, string);

    cout << string << endl;


};

void problema_6(){
    problema_pendiente();
};

/*

    un programa que recibe una cadena de caracteres y elimina los caracteres repetidos.
    Por ejemplo, si se recibe ”bananas”, debe mostrar ”bans”.

*/
void problema_7(){
    cout << "un programa que reciba una cadena de caracteres y elimine los caracteres repetidos.\n"
            "Por ejemplo, si se recibe \"bananas\", debe mostrar \"bans\".\n";

    char c1[100]{}, c2[100]{};

    cout << "Ingrese la cadena: ";
    cin >> c1;

    bool charInChars[128]{};
    int it{};

    for (char c : c1) {
        if (!charInChars[int(c)]){
            c2[it] = c;
            it++;
        }
        charInChars[int(c)] = true;
    }
    cout << "Original: " << c1 << ". Sin repetidos: " << c2 << endl;
};

void problema_8(){
    problema_pendiente();
};

/*



*/
void problema_9(){
    problema_pendiente();
};

void problema_10(){
    problema_pendiente();
};

void problema_11(){
    problema_pendiente();
};

void problema_12(){
    problema_pendiente();
};

void problema_13(){
    problema_pendiente();
};

void problema_14(){
    problema_pendiente();
};

/*

    @brief Programa para calcular la intersección entre dos rectángulos.

    Este programa permite determinar el área de superposición (intersección)
    entre un par de rectángulos dadas 2 referencias por rectangulo

    - Coordenadas X,Y | Ancho Y Altura (X Y ANCHO ALTO)

    NOTA: Las coordenadas en el eje Y aumentan hacia abajo y en el eje X aumentas hacia la derecha

*/
void problema_15(){
    int A[4]{}, B[4]{}, C[4]{};

    cout << "Ingrese la coodenada x de A:";
    cin >> A[0];
    cout << "Ingrese la coodenada y de A:";
    cin >> A[1];
    cout << "Ingrese el ancho de A:";
    cin >> A[2];
    cout << "Ingrese la atura y de A:";
    cin >> A[3];

    cout << "Ingrese la coodenada x de B:";
    cin >> B[0];
    cout << "Ingrese la coodenada y de B:";
    cin >> B[1];
    cout << "Ingrese el ancho de B:";
    cin >> B[2];
    cout << "Ingrese la atura y de B:";
    cin >> B[3];
};

void problema_16(){
    problema_pendiente();
};

void problema_17(){
    problema_pendiente();
};

void problema_18(){
    problema_pendiente();
};

void problema_pendiente(){
    cout << "Problema pendiente" << endl;
}

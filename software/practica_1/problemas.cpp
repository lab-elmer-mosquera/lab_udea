#include "problemas.h"
#include <iostream>

using std::cout, std::cin, std::endl;

/*

    Un programa que identifique si un caracter ingresado es una vocal, una consonante o
    ninguna de las dos e imprima un mensaje segun el caso.
        Por ejemplo
            si ingresa @, debe imprimir: @ no es una letra
            Si ingresa a, debe imprimir: a es una vocal
            Si ingresa C, debe imprimir: C es una consonante

*/

void problema_1(){

    bool esLetra{}, esConsonante{}, esVocal{};
    char input{};

    cout << "Digire una caracter: ";
    cin >> input;

    esLetra = ((int)input >= (int)'A' && (int)input <= (int)'Z') || ((int)input >= (int)'a' && (int)input <= (int)'z');

    if (esLetra) {
        esVocal = (input == 'A' || input == 'a') || (input == 'E' || input == 'e') || (input == 'I' || input == 'i') || (input == 'O' || input == 'o') || (input == 'U' || input == 'U');
        if (esVocal) {
            cout << input << " es una vocal\n";
        } else {
            cout << input << " es una consonate\n";
        }
    } else {
        cout << input << " no es una letra\n";
    }
}

/*

    Un programa que determine la combinacion mınima de billetes y monedas para una cantidad
    dada. Los billetes disponibles son: $50.000, $20.000, $10.000, $5.000, $2.000, $1.000; las monedas:
    500, 200, 100, 50. Si no es posible distribuir la cantidad exacta entre las denominaciones disponibles,
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

void problema_2() {
    cout << "Un programa que determina la combinacion mınima de billetes y monedas\npara una cantidad dada.\nLos billetes disponibles son:\n- $50.000 - $20.000 - $10.000 - $5.000 - $2.000 - $1.000 \nlas monedas:\n- 500 - 200 - 100 - 50.\n";

    int monto{};

    cout << "Digite el monto a retirar: ";
    cin >> monto;

    if (monto <= 0) {
        cout << "Monto invalido " << monto << endl;
        return;
    }

    int restante{};

    restante = monto;

    cout << "Monto ingresado " << monto << "\n";
    cout << "50000: " << restante/50000 << "\n";
    restante %= 50000;
    cout << "20000: " << restante/20000 << "\n";
    restante %= 20000;
    cout << "10000: " << restante/10000 << "\n";
    restante %= 10000;
    cout << "5000:  " << restante/5000 << "\n";
    restante %= 5000;
    cout << "2000:  " << restante/2000 << "\n";
    restante %= 2000;
    cout << "1000:  " << restante/1000 << "\n";
    restante %= 1000;
    cout << "500:   " << restante/500 << "\n";
    restante %= 500;
    cout << "200:   " << restante/200 << "\n";
    restante %= 200;
    cout << "100:   " << restante/100 << "\n";
    restante %= 100;
    cout << "50:    " << restante/50 << "\n";
    restante %= 50;
    cout << "Faltante: " << restante << endl;
}

/*

    Un programa que reciba un mes y un dia e indique si la fecha es valida. Para 29/2, indicar:
    “es valida en anos bisiestos”.

*/

void problema_3(){
    cout << "Un programa que recibe un mes y un dia e indique si la fecha es valida. Para 29/2, indicar: \"es valida en anos bisiestos\"\n";

    char input[6]{};

    cout << "Ingrese una fecha dd/mm | mm (eje: 31/12 | 12): ";
    cin >> input;
    cout << input;

    int fecha[2]{};
    const int DiasValidos[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

    bool isNum{}, separadorEncontrado{};


    for (char c : input) {
        isNum = (c >= '0' && c <= '9');

        if (!isNum && c != 0){
            if (c == '/' && !separadorEncontrado){
                separadorEncontrado = true;
                continue;
            }
            cout << " entrada invalida" << endl;
            return;
        }
        if (isNum && !separadorEncontrado)
            fecha[0] = fecha[0] * 10 + (c - '0');
        else if (isNum && separadorEncontrado)
            fecha[1] = fecha[1] * 10 + (c - '0');
    }

    if (!separadorEncontrado) {
        if (fecha[0] > 12 || fecha[0] == 0 )
            cout << " es un mes invalido" << endl;
        else
            cout << " es un mes valido" << endl;
        return;
    } else if (separadorEncontrado && fecha[1] != 0 && fecha[1] <= 12 && fecha[0] != 0){
        if (fecha[1] == 2 && fecha[0] == 29){
            cout << " es valido en bisiesto" << endl;
            return;
        }
        if (fecha[0] <= DiasValidos[fecha[1]-1]){
            cout << " es una fecha valida" << endl;
            return;
        }
    }


    cout << " es una fecha invalida" << endl;
}


void problema_pendiente(){
    cout << "Este problema no ha sido desarrollado" << endl;
}




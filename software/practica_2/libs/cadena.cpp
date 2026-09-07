#include "cadena.h"
#include <iostream>

using std::cout, std::endl;

bool StringsAreEquals(char *string1, char *string2){
    int it{};
    for (char c1 = string1[it], c2 = string2[it]; c1 == c2; it++, c1 = string1[it], c2 = string2[it]) {
        if (c1 == '\0' && c2 == '\0'){
            return 1;
        }
    }
    return 0;
}


/*

    @brief Convierte un entero en una cadena de caracres

    Esta función que toma un número entero (int) y lo convierte a cadena de caracteres. Usando
    parámetros por referencia para retornar la cadena.

    @param Numero (int) a convertir
    @param Referencia (char *) a en la que se almacena la conversion

*/
void intToChar(int num, char *string){
    int cpNum = num;
    char cadena[10];

    // TODO

    // obtener numero invertido
    // convertir invertido en char mediante

}



/*

    @brief Imprime una cadena de caracres agregando salto de linea

    Esta función que toma una cadena de caracteres (char[]), recorre cada caracter; los imprimrime y agrega un salto de linea.

    @param Referencia (char *) a en la que se almacena la conversion

*/
void PrintlnStringsTypeChars(char *string){
    int it{};
    for (char c = string[it]; c != '\0'; it++, c = string[it]) {
        cout << c;
    }
}
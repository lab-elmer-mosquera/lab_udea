#include <iostream>
// #include "ejercicios.h"
#include "problemas.h"

int main() {
    using std::cout, std::cin, std::endl;
    bool entradaValida{};
    char entrada[10]{};
    int opcion{};

    cout << "Que programa desea ejecutar 1 - " << TOTAL_PROBLEMAS << ": ";
    cin >> entrada;
    for (char c : entrada) {
        if (c >= '0' && c <= '9'){
            opcion = opcion * 10 + (c - '0');
            continue;
        }
        if (c != 0) {
            cout << "entrada invalida" << endl;
            opcion = 0;
            return 0;
        }
    }

    if (opcion >= 1 && opcion <= 16){
        entradaValida = true;
    } else {
        cout << "fuera de rango" << endl;
        return 0;
    }

    if (entradaValida) {
        problemas[opcion-1]();
        return 0;
    }

    cout << "error desconocido" << endl;
    return 1;
}

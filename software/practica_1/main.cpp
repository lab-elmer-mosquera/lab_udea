#include <iostream>
// #include "ejercicios.h"
#include "problemas.h"

int main() {
    using std::cout, std::cin, std::endl;
    int opcion{};

    cout << "Que programa desea ejecutar 1 - " << TOTAL_PROBLEMAS << ": ";
    cin >> opcion;

    if (opcion >= 1 && opcion <= 16){
        problemas[opcion-1]();
        return 0;
    } else {
        cout << "entrada invalida" << endl;
        return 0;
    }


    cout << "error desconocido" << endl;
    return 1;
}

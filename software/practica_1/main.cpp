#include <iostream>
#include "ejercicios.h"
#include "problemas.h"

int main() {
    using std::cout, std::cin, std::endl;
    int opcion{};

    cout << "Seleccione que tipo de programa desea ejecutar\n1 - problema\n2 - ejercicio\n> "; cin >> opcion;

    if (opcion >= 1 && opcion <= 2) {
        if (opcion == 1) {
            cout << "Que programa desea ejecutar 1 - " << TOTAL_PROBLEMAS << ": ";
            cin >> opcion;
            if (opcion >= 1 && opcion <= TOTAL_PROBLEMAS){
                problemas[opcion-1]();
                return 0;
            }
        }
        if (opcion == 2) {
            cout << "Que programa desea ejecutar 1 - " << TOTAL_EJERCICIOS << ": ";
            cin >> opcion;
            if (opcion >= 1 && opcion <= TOTAL_EJERCICIOS){
                ejercicios[opcion-1]();
                return 0;
            }
        }
    } else {
        cout << "entrada invalida" << endl;
        return 0;
    }


    cout << "error desconocido" << endl;
    return 1;
}

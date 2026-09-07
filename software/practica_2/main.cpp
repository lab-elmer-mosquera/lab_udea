#include <iostream>
#include "libs/consola.h"
#include "problemas.h"

using namespace std;

int main()
{
    int n{};
    cout << "EJECUTAR PROGRAMA\n"
            "    1   a   " << TOTAL_PROBLEMAS << "     \n";

    Input_Int_Range(1, TOTAL_PROBLEMAS, n);
    problemas[n-1]();
    return 0;
}

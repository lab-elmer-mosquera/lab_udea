#include <iostream>

using std::cout, std::cin, std::endl;

void Input_Int_Range(int min, int max, int &input){
    for (int i = 0, temp; i <= 5; i++) {
        cout << ">> ";
        cin >> temp;
        if (temp >= min && temp <= max){
            input = temp;
            return;
        }
        cout << "entrada invalida" << endl;
    }

    cout << "Limite de itentos alcanzado" << endl;
    exit(EXIT_FAILURE);

}

void Println(char *mensaje){
    cout << mensaje << endl;
};
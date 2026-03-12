#include <iostream>
using namespace std;
int main() {

    int cont;

    cont=0;
    while(cont < 1000) {
            cout << cont << "\n";
            cont++; //incremento faz parar em 1000 padrão
            if(cont == 500) { //interrompe e sai do while no 499
                break;
            }

    }

    return 0;
}
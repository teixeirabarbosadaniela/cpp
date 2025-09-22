#include <iostream>
using namespace std;
int main() {

    /* 
    tema: do while
    ele executa o bloco de comandos e testa a condicional NO FINAL, garantindo que a estrutura de comandos seja executada AO MENOS UMA VEZ*/

        int cont;

        cont=0;
        do{ //nesse momento, vai apenas executar o bloco e so no final ele testa se a condição é satisfeita ou não
            cout << cont << "\nI will not copy code without understanding it";
            cont++; //condição de parada   ou de dois em dois 'cont+=2' (suscessivamente)  
        }while(cont<20);

        cout << "\nRotina finalizada\n";

    return 0;

}
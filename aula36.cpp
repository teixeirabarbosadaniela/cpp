#include <iostream>
using namespace std;
int main(){

//ponteiros armazenam o endereço de outra variável/ está apontando o endereço de outra variável

    string veiculo="carro";

    string *pv;
    pv=&veiculo; //ponteiro pveiculo recebe o endereço da variável veículo

    cout << pv << "\n\n" << &veiculo;

    *pv="Moto"; //no endereço apontado por pveiculo, adicione "moto"

    cout << "\n\n" << veiculo << "\n\n" << *pv;

/*
int *pn; // operador de ponteiro *
pn= &num; //operador de endeço &

cout << pn "\n\n";
*/

    return 0;
}
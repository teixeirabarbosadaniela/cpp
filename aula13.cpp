#include <iostream>
using namespace std;
int main(){

    /*
    switch(expressão){ //atenção a identação

        case const1; //quantas constantes forem necessárias para teste
            comandos;
            break; //encontra o break e sai do switch
        case const2;
            comandos;
            break;
        default;
            comandos; //condição padrão, não precisa do break/se nao houver nenhum caso (coinstantes anteriores) de igualdade com a expressao, essa será a condição executada

    }
    */

    int val;

    cout << "Selecione uma cor:\n";
    cout << "[1]=verde, [2]=azul, [3]=vermelho\n";

    cin >> val;


    switch(val) {
        case 1:
            cout << "Cor selecionada: verde\n";
            break;
        case 2:
            cout << "Cor selecionada: azul\n";
            break;
        case 3:
            cout << "Cor selecionada: vermelha\n";
            break;
        default:
            cout << "Valor selecionado invalido\n";
    }

    return 0;
}
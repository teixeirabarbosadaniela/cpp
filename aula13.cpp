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

    /*  
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
    */


    /*
    cout << "Selecione uma cor:\n";
    cout << "[1,2,3]=verde, [4,5,6]=azul\n";

    cin >> val;

    switch(val) {
        case 1:
        case 2:
        case 3:
            cout << "Cor selecionada: verde\n";
            break;

        case 4:
        case 5:
        case 6:
            cout << "Cor selecionada: azul\n";
            break;
        
        default:
            cout << "Valor selecionado invalido\n";
    }
    */



    cout << "Selecione um transporte:\n";
    cout << "[1]=carro, [2]=moto, [3]=aviao, [4]=helicoptero\n";

    cin >> val;

    switch(val) {
        case 1:
        case 2:
            cout << "\nTransporte terrestre\n";

            switch(val){ //switch aninhado! atenção que entra antes do break do case principal:)
                case 1:
                    cout << "carro selecionado\n";
                    break;
                case 2:
                    cout << "moto selecionada\n";
                    break;
            }
            break;

        case 3:
        case 4:
            cout << "Transporte aereo\n";

            switch(val){ //switch aninhado! atenção que entra antes do break do case principal:)
                case 3:
                    cout << "aviao selecionado\n";
                    break;
                case 4:
                    cout << "helicoptero selecionado\n";

                    break;
            }
            break;

        default:
            cout << "Valor selecionado invalido\n";
    }


    cout << "\nPrograma finalizado\n\n";

    return 0;
}
#include <iostream>
using namespace std;
int main() {

    /* operadores lógicos 
    AND (&&) todos os testes devem ser atendidas = true
    OR (||) pelo menos um dos testes atendidos = true
    NOT (!) vai inverter o valor em um teste
    */


    /*
    int num;
    num=6;

    if(num >4 && num <7){
        cout << "\n\nValor aceito\n";
    }else {
        cout << "\n\nNão aceito\n";
    }
    */

    /*
    int num2;
    num2=9;

    if(num2 <3 || num2>8 ){
        cout << "\n\nValor aceito\n\n";
    }else {
        cout << "\n\nNão aceito\n\n";
    }
    */


    int num3;
    num3=7;

    if((num3 >=3 && num3 <=6) || (num3 >9 && num3 <15) || (num3 >15 && num3 <20)) {
        cout << "\n\nValor aceito\n\n";
    }else {
        cout << "\n\nNão aceito\n\n";
    }


    return 0;
}

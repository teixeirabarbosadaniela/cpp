#include <iostream>
using namespace std;
int main() {

/*tema: loop FOR - dentro da sintaxe de construção e definição do loop, será inserido 3 parametros 
1- inicialização da variavel de controle
2- condicional de execução (enquanto verdadeiro (satisfeito) vai executar interaçoes)
3- incremento ou decremento (contador) e dentro desse bloco tem a comandos que o loop vai executar 

    for(inicialização de uma ou mais ; condic ; incr/decr) {
        comandos;
        }

*/
    /*
    int x;

    for(x=0 ; x<=10 ; x++){ // chaves sao opcionais neste caso
        cout << x << "\n";
    }
    */

    /*
    int x,y;
    for(x=0,y=1 ; x<=10 ; x++,y+=2)
        cout << x << " - " << y << "\n";
    */

    int x,y,z;
    for(x=0,y=1,z=0 ; x<=10 && z<=6 ; x++,y+=2,z+=2) {
        cout << x << " - " << y << " - " << z << "\n";
    }


    return 0;
}
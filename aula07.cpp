#include <iostream>
using namespace std;
int main() {

    int n1=10; //declaramos e inicializamos variável ao mesmo tempo
    

    //incremento e decremento

    cout << n1 << "\n\n"; //antes do incremento



    //n1=n1+1; //forma tradicional incremento
    //n1=n1-5; //forma tradicional decremento

    cout << n1++ << "\n\n"; //pós-incremento 
    cout << ++n1 << "\n\n"; //pré-incremento

    //n1+=1; //forma simplificada/contraída de incrementar
    //n1-=5; //forma simplificada/contraída de decrementar

    //n1++; //outra maneira incremento (soma sempre apenas 1)
    //n1--; //outra maneira de decremento (subtrai sempre apenas 1)

    //n1*=2; //multiplica n1 por 2
    //n1%=2; //mostra o resto da divisão por 2
    //n1/=2; //divide por 2

    //n1++; pós-incremento ou pós-fixado
    //++n1; pré-incremento ou pré-fixado


    return 0;
}
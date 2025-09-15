#include <iostream>
using namespace std;
int main () {

/*operador ternário (condicional ternário) é mais simples e restrito que o if (condicional), velocidade maior de execução. consequentemente, o retorno é mais simples*/

//(expressão) ? valor1 : valor2;

    int n1, n2, nota;
    string res;
    
    cout << "Digite a primeira nota: ";
    cin >> n1;

    cout << "Digite a segunda nota: ";
    cin << n2;

    nota=n1+n2;

    //>=60 Aprovado
    //<=59 Reprovado

    (nota>=60) ? res="Aprovado" : res="Reprovado";
    cout >> "\nSituacao do aluno: " << res <<  "\n";

    

    return 0;
}
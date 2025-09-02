#include <iostream>
using namespace std;

int n1, n2; //variáveis globais (escopo global, podem ser acessadas de qualquer lugar - mesmo dentro da main!)

int main() {

    // operadores matemáticos: ()/ * + - % (mode)

    int n3, n4; //variáveis locais, não poderão ser acessadas por outras funções (escopo local)
    int res;

    n1=11;
    n2=3;
    n3=5;
    n4=2;

    res=n1+n2+n3+n4;

    cout << "soma de todas as variáveis: " << res << "\n\n";
    

    return 0;
}
#include <iostream>
using namespace std;
int main() {


    int n1,n2,res;
    char opc;

    cout << "Digite o valor da nota 1: ";
    cin >> n1;

    cout << "Digite o valor da nota 2: ";
    cin >> n2;

    res=n1+n2;

    if(res >= 60) {
        cout << "\nAluno aprovado\n";
    }else {
        cout << "\nAluno reprovado\n";
    }

    return 0;
}
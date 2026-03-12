#include <iostream>
#include <cstdlib>
using namespace std;
int main() {

    int n1,n2,res;
    char opc;

    inicio: //lable, ao encontrá-lo, retorna no loop
    
    system("cls"); //comando do DOS para limpar a tela pós loop e, pra ele funcionar, precisa adc biblioteca <cstdlib>""

    cout << "Digite o valor da nota 1: ";
    cin >> n1;

    cout << "Digite o valor da nota 2: ";
    cin >> n2;

    res=n1+n2;

/*  
    >=60 Aprovado
    >=40 e <60 Recuperação
    <40 Reprovado

*/

    if(res >= 60) {
        cout << "\nAluno aprovado\n";
    }else if(res >=40) {
        cout << "\nRecuperação\n";
    }else {
        cout << "\nAluno reprovado\n";
    }

    cout << "\nDigitar outras notas? (s/n): \n";
    cin >> opc;

    if(opc=='s' or opc=='S') {
        goto inicio;
    }
 
    return 0;
}
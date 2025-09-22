#include <iostream>
using namespace std;
int main() {

/*
tema: ARRAY ou VETORES: coleção de variaveis(posições) para armazenar valores de mesmo tipo (declara informando tipo, nome, tamanho)
vetor simples (unidirecional) por enquanto.
*/


    int vetor[5]; // seria o mesmo que descrever 'int vetor0, vetor1, vetor2, ...vetor4' (porque iniciei com zero (sempre!) e solicitei 5 posições(tamanho));
    vetor[0]=10;
    vetor[1]=20;
    vetor[2]=30;
    vetor[3]=40;
    vetor[4]=50;

    cout << vetor[0] << "\n";


    return 0;
}

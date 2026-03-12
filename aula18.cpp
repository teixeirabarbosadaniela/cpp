#include <iostream>
using namespace std;
int main() {

/*
tema: ARRAYS ou VETORES: coleção de variaveis(posições) para armazenar valores de mesmo tipo (declara informando tipo, nome, tamanho)
vetor simples (unidirecional) por enquanto.
*/

    
    int vetor[5]; // seria o mesmo que descrever 'int vetor0, vetor1, vetor2, ...vetor4' (porque iniciei com zero (sempre!) e solicitei 5 posições(tamanho));
    int i;
    vetor[0]=10;
    vetor[1]=20;
    vetor[2]=30;
    vetor[3]=40;
    vetor[4]=50;

    for(i=0; i<5; i++) {//for é apropriado pra loop de array
        cout << vetor[i] << "\n"; 
    }
    

    //função sizeof retorna tamanho.
    //pra facilitar o trabalho em relação ao tamanho do array e nao precisar atualizar sempre / retorna o tamanho do tipo ---> duvida: pq divide por 4 e continua funcionando!


    /* revisar:
    
        int tam=5;
        int vetor[tam]={10,20,30,40,50};//cria e insere elementos ao mesmo tempo. obs.: na aula não fica claro como ajustar no código para atualizar automaticamente/ revisar 
        int i

        for(i=0; i<tam; i++) { //automatiza a atualização dos valores 
            cout << vetor[i] << "\n";
        }

    */
    return 0;
}

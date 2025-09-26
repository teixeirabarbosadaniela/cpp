#include <iostream>
using namespace std;
int main(){

/*
tema: matrizes (arrays bidimensionais)
tem a mesma logica de operação dos vetores, a diferença é que ha mais de 1 indice de controle "vetor de vetores/array de arrays"

int matriz[linhas][colunas de cada linha]= valor
*/

    /*
    int matriz[3][4];
    int l,c;

    matriz[0][0]=0;
    matriz[0][1]=0;
    matriz[0][2]=0;
    matriz[0][3]=0;

    matriz[1][0]=1;
    matriz[1][1]=1;
    matriz[1][2]=1;
    matriz[1][3]=1;

    matriz[2][0]=2;
    matriz[2][1]=2;
    matriz[2][2]=2;
    matriz[2][3]=2;

    //necessário 1 FOR para cada dimensão

    for(l=0;l<3;l++){ //linha começa em zero
        for(c=0;c<4;c++){ //FOR aninhado. para estrutura de colunas, tambem começando em zero
            cout << matriz[l][c] << " ";
        }    
        cout << "\n";
    }

    */

    //automatizando:

    int matriz[3][4];
    int l,c;

    for(l=0;l<3;l++){ 
        for(c=0;c<4;c++){ 
            matriz[l][c]=l;
            }   
        }
    
    for(l=0;l<3;l++){ 
        for(c=0;c<4;c++){ 
            cout << matriz[l][c] << " ";
        }
        cout << "\n";
    }


    /*
    int matriz[3][4];
    int l,c;

    for(l=0;l<3;l++){ 
        for(c=0;c<4;c++){ 
            cin >> matriz[l][c]; //recebendo pelo teclado (digitar 3x (linhas) 4 digitos (coluna) seguido do enter)
            }   
        }
    
    for(l=0;l<3;l++){ 
        for(c=0;c<4;c++){ 
            cout << matriz[l][c] << " ";
        }
        cout << "\n";
    }
    */

    return 0;
}
#include <iostream>
#include <stdlib.h> //para funcionar o camando system
using namespace std;
int main(){

//jogo da forca

char palavra[30],letra[1],secreta[30];
int tam,i,chances,acertos;
bool acerto;

//variáveis de controle
chances=6; 
tam=0;
i=0;
acerto=false;
acertos=0;

cout << "Fale para seu amigo tampar os olhos e digite a palavra secreta: \n";
cin >> palavra;
system("cls"); //limpa a tela pra obter a palavra secreta

    while(palavra[i] != '\0') { //flag para indicar que encerrou a string/conteudo digitado
        i++; //para passar para a proxima posição
        tam++;
    }

    for(i=0;i<30;i++){ //preencher vetor secreta com tracinhos
        secreta[i]='_';
    } 
    
    //rotina do jogo

    while(){
        
    }
    return 0;
}
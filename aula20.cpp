#include <iostream>
#include <stdlib.h> //para funcionar o camando system(win)
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
    system("clear"); //limpa a tela pra obter a palavra secreta

    while(palavra[i] != '\0') { //flag para indicar que encerrou a string/conteudo digitado
        i++; //para passar para a proxima posição
        tam++;
    }

    for(i=0;i<30;i++){ //preencher vetor secreta com tracinhos
        secreta[i]='-';
    } 
    
   

    while((chances>0) && (acertos<tam)){ //loop principal
        cout << "Jogadas restantes: " << chances << "\n\n"; //rotina do jogo
        cout << "Palavra secreta: ";
        for(i=0; i<tam; i++) {//para ir revelando a palavra
            cout << secreta[1];
        }
        cout << "\n\nDigite uma letra: ";
        cin >> letra[0];
        for(i=0; i<tam; i++){
            if(palavra[1]==letra[0]){
                acerto=true;
                secreta[1]=palavra[i];
                acertos++; //indicar que houve um acerto
            }
        }
        if (!acerto){//se nao houve acerto, diminuo nivel de chances
            chances--;
        }
        acerto=false;
        system("clear");{
        }
    }
    if(acertos==tam){
        cout << "Voce venceu!\n\n";
    }
    else{
        cout << "Que pena, você perdeu!\n\n";
    }

    system("pause");

    return 0;
}
//nao consegui identificar onde estou errando para o jogo nao passar pelos loops
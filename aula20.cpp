#include <iostream>
#include <stdlib.h> //para funcionar o camando system(win)
using namespace std;
int main(){

//jogo da forca

/* (minha tentativa com prof)

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
*/

//tentativa gpt

#include <iostream>
#include <stdlib.h> 
using namespace std;

int main() {
    char palavra[30], secreta[30];
    char letra;
    int tam = 0, i, chances = 6, acertos = 0;
    bool acerto;

    cout << "Fale para seu amigo tampar os olhos e digite a palavra secreta: \n";
    cin >> palavra;
    system("clear"); // limpa a tela no Linux

    // Descobre o tamanho da palavra
    while (palavra[tam] != '\0') {
        tam++;
    }

    // Inicializa a palavra secreta com tracinhos
    for (i = 0; i < tam; i++) {
        secreta[i] = '-';
    }
    secreta[tam] = '\0'; // marca o fim da string

    // Loop principal do jogo
    while ((chances > 0) && (acertos < tam)) {
        cout << "Jogadas restantes: " << chances << "\n\n";
        cout << "Palavra secreta: " << secreta << "\n\n";

        cout << "Digite uma letra: ";
        cin >> letra;

        acerto = false;
        for (i = 0; i < tam; i++) {
            if (palavra[i] == letra && secreta[i] == '-') {
                secreta[i] = palavra[i];
                acertos++;
                acerto = true;
            }
        }

        if (!acerto) {
            chances--;
        }

        system("clear");
    }

    // Resultado final
    if (acertos == tam) {
        cout << "Parabéns, você venceu! 🎉\n";
    } else {
        cout << "Que pena, você perdeu! A palavra era: " << palavra << "\n";
    }

    cout << "\nPressione ENTER para sair...";
    cin.ignore();
    cin.get();

    return 0;
}

//também deu erro (linha 77)
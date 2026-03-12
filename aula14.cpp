#include <iostream>
using namespace std;
int main(){

//laço while, quando não conhece condição de parada; numero de vezes a ser repetido é indeterminado

/*
while(expressao){
    comandos
}
*/

/*
    int n;

    n=0;
    while(n<10){
        cout << n << "\n";
        //n++; //concede uma condição de parada
        cin >> n; //pode ser recebendo do teclado
        
    }
    */

    /*
    int cont;
    cont=0;
    while(cont<20){
        cout << cont << "\nI will not copy code without understanding it";
        cont++; //condição de parada   ou de dois em dois 'cont+=2' (suscessivamente)     
    }
    */

    
    int cont;
    cont=0;
    while(cont++<20){//incremento para condição de parada  
        cout << cont << "\n" << "I will not copy code without understanding it - ";

        if(cont == 10) {
            break;
        }
           
    }
    

    cout << "\nRotina finalizada\n";
   




    return 0;
}
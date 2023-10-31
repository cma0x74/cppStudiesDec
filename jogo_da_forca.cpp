#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
    char word[30], letter[1], secret[30] /*category*/;
    int tam= 0, i= 0, life= 5, acertos= 0;
    bool acerto= false;

    cout<< "Insira a palavra a ser descoberta: ";
    cin>> word;
    system("clear");

    /*cout<< "Qual é a categoria da palavra secreta? ";
    cin>> category;*/

    while(word[i]!= '\0'){
        i++;
        tam++;
    }

    for(i= 0; i< 30; i++){
        secret[i]= '-';
    }

    while(life> 0 && acertos< tam){
        cout<< "\n\n Vidas restantes: "<< life<< endl;
        cout<< "\n Palavra secreta: ";
        //cout<< "\n\n Dica: a categoria da palavra é "<< category;
        
        for(i= 0; i< tam; i++){
            cout<< secret[i];
        }

        cout<< "\n\n Digite uma letra: ";
        cin>> letter[0];
        
        for(i= 0; i< tam; i++){
            
            if(word[i]== letter[0]){
                acerto= true;
                secret[i]= word[i];
                acertos++;
            }
        }

        if(!acerto){
            life--;
        }

        acerto= false;
        system("clear");
    }

    if(acertos== tam){
        cout<< "\n You win! \n";
    } 
    
    else{
        cout<< "You loss";
    }

    return 0;
}
#include <iostream>
#include <random>

using namespace std;

int main() {
    //gerador de número aleatório
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> distribution(0, 50);
    
    //jogar novamente
    char replay;

    do{
        int random_num = distribution(gen), user_num, tentativas = 0;

        //loop
        do{
            //interação com o usuário
            cout<<"\n Advinhe o número. Dica: está entre 0 e 50: ";
            cin>>user_num;
            tentativas++;

            //testes
            if (user_num > random_num){
                cout<<"\n o número secreto é menor"<<endl;
            } else if(user_num < random_num){
                cout<<"\n o número secreto é maior"<<endl;
            } else{
                cout<<"\n PARABÉNS!! VOCÊ DESCOBRIU O NÚMERO SECRETO APÓS "<<tentativas<< " TENTATIVAS \n"<<endl;
            }

        } while(user_num != random_num);
        
        cout<<"jogar novamente? (s/n): ";
        cin>>replay;

    } while(replay == 's'|| replay == 'S');

    return 0;
}

//programa que escolhe um número aleatório entre 0 e 50 e deixa o user advinhar tentando quantas vezes forem necessárias, ao final do programa ele mostra a quantidade de tentativas e pergunta se o player quer jogar novamente
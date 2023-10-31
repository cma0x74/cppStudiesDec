#include <iostream>
#include <chrono>
#include <thread>
using namespace std;
int main(){
    int time;
    
    cout<<"Digite o número de segundos para a contagem regressiva: ";
    cin>>time;

    if(time<=0){
        cout<<"Número de segundos inválido\n";
        return 1;        
    }

    for(int i=time; i>=0; i--){
        cout<<i<<" segundos restantes\n";
        this_thread::sleep_for(chrono::seconds(1));
    }
    cout<<"Contagem regressiva concluída!\n";

    return 0;
}

//contagem regressiva com um intervalo de um segundo entre cada algarismo
#include <iostream>
#include <string>
using namespace std;

int soma(int a, int b);
void adicao(int a, int b);
void transp(string vetor[4]);

int main(){
    string vehicles[4]= {"moto", "carro", "metrô", "avião"};
    
    cout<< soma(77, 33)<< endl;
    adicao(69, 24);
    transp(vehicles);

    return 0;
}

int soma(int a, int b){
    return a + b;
}

void adicao(int a, int b){
    cout<< "A soma entre "<< a<< " e "<< b<< " = "<< a + b<< endl;
}

void transp(string vetor[4]){
    for(int i= 0; i< 4; i++){
        cout<< vetor[i]<< endl;
    }
}
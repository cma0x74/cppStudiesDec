#include <iostream>
using namespace std;
int main(){
    int inicio, fim;

    cout<<"Digite o início do intervalo: ";
    cin>>inicio;

    cout<<"Digite o fim do intervalo: ";
    cin>>fim;

    if(inicio%2!=0)
        inicio++;
    
    for(int i=inicio; i<fim; i+=2)
        cout<<i<<endl;

    return 0;
}
//mostra todos os números pares no intervalo entre 1 e 50
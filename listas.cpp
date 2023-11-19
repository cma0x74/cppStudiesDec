#include <iostream>
#include <list>
using namespace std;
int main(){
    list<int> lista;
    int tam= 10;
    list<int>::iterator iter;

    for(int i= 0; i< tam; i++){
        lista.push_back(i);
    }
    
    // insere um item em uma posição na lista
    /*iter= lista.begin();
    advance(iter, 7);
    lista.insert(iter, 999);*/

    tam= lista.size();
    for(int i= 0; i< tam; i++){
        cout<< lista.front()<< endl;
        lista.pop_front();
    }
    
    return 0;
}
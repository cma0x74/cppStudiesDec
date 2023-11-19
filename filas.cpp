#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue <string> discentes;
    discentes.push("olopA");
    discentes.push("javoscripto");
    discentes.push("csharpo");
    discentes.push("jojo");
    discentes.push("htmlo");

    while(!discentes.empty()){
        cout<< "\n Qtd de elementos na fila: "<< discentes.size();
        cout<< endl<< discentes.front();
        discentes.pop();
    }

    return 0;
}
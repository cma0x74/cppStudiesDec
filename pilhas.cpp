#include <iostream>
#include <stack>
using namespace std;
int main() {
    stack <string> discentes;
    discentes.push("olopA");
    discentes.push("javoscripto");
    discentes.push("csharpo");
    discentes.push("jojo");
    discentes.push("htmlo");

    while(discentes.size()>= 0){
        cout<< "\n Qtd de elementos na pilha: "<< discentes.size();
        cout<< endl<< discentes.top();
        discentes.pop();
    }
    
    return 0;
}
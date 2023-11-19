#include <iostream>
using namespace std;
int main(){
    int a=0, b=1, n;

    cout<<"Quantos termos da sequência de Fibonacci você quer ver? ";
    cin>>n;
    
    cout<< a<< endl<< b<< endl;
    for(int i = 1; i <= n; i++){
        int temp = b;
        b = a + b;
        a = temp;

        cout<< b<< endl;
    }

    return 0;
}
//exibe quantos termos o user quiser da sequência de fibonacci
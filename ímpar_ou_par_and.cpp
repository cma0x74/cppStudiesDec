#include <iostream>
using namespace std;
int main(){
    int num1, num2;

    cout<<"forneça um número: ";
    cin>>num1;

    cout<<"forneça mais um número: ";
    cin>>num2;

    if (num1%2==0 && num2%2==0)
    {
        cout<<"ambos os números fornecidos são pares"<<endl;
    }else{
        cout<<"um ou mais dos números fornecidos é ímpar"<<endl;
    }
    
    return 0;
}
#include <iostream>
using namespace std;
int main ()
{
    float num;
    int mult;

    cout<< "Digite um numero e veja sua tabuada de multiplicacao:  ";
    cin>> num;

    for(mult = 1; mult <= 10; ++mult)
    {
        cout<< num<< " x "<< mult<< " = "<< num * mult<< endl;
    }
    
    return 0;
}
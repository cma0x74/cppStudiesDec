#include <iostream>
using namespace std;

void soma();
void soma(int a, int b);

int main(){
    soma(77, 33);
    soma();

    return 0;
}

void soma(){
    float a = 49.5, b = 49.5;
    cout<< "A soma entre "<< a<< " e "<< b<< " = "<< a + b<< endl;
}

void soma(int a, int b){
    cout<< "A soma entre "<< a<< " e "<< b<< " = "<< a + b<< endl;
}
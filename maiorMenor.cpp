//script que lê três números e mostra qual é o maior e qual o menor

#include <iostream>

using namespace std;

int main() {
    float num1, num2, num3, bigger, smaller;
    
    cout << "forneça um número qualquer: ";
    cin >> num1;
    
    cout << "forneça mais um número: ";
    cin >> num2;

    cout << "forneça um último número: ";
    cin >> num3;

    //bigger
    bigger = num1;

    if (num2 > bigger)
    {
        bigger = num2;
    }
    
    if (num3 > bigger)
    {
        bigger = num3;
    }
    
    //smaller
    smaller = num1;

    if (num2 < smaller)
    {
        smaller = num2;
    }
    
    if (num3 < smaller)
    {
        smaller = num3;
    }
    
    cout << "o maior número é " << bigger << " e o menor é " << smaller << endl;

    return 0;
}
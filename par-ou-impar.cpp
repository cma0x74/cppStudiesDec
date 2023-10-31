// script que lê um numero inteiro qualquer e diz se ele é par ou ímpar

#include <iostream>

using namespace std;

int main() {
    char again;
    
    do
    {
        int num;
        cout << "insira um número: ";
        cin >> num;

        if (num % 2 == 0)
        {
            cout << "o número " << num << " é par" << endl;
        }
        
        else {
            cout << "o número " << num << " é ímpar" << endl;
        }

        cout << "deseja testar outro valor? (s/n): ";
        cin >> again;

    } while (again == 's'|| again == 'S');

    return 0;
}
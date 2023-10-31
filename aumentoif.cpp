//aumento de 10% para salários acima de R$1.250.00 e aumento de 15% para salários inferiores ou iguais

#include <iostream>

using namespace std;

int main() {
    float sal;
    cout << "insira o salário a receber aumento: ";
    cin >> sal;

    if (sal > 1250.00)
    {
        cout << "o salário de R$" << sal << " com um aumento de 10% é: R$" << sal+(0.10*sal) << endl;
    }
    
    if (sal <= 1250.00)
    {
        cout << "o salário de R$" << sal << " com um aumento de 15% é: R$" << sal+(0.15*sal) << endl;
    }

    return 0;
}
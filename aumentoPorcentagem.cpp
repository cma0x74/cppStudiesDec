//calcula um aumento por porcentagem
#include <iostream>

using namespace std;

int main() {
    float v, p;

    cout << "insera o valor que receberá aumento: ";
    cin >> v;

    cout << "forneça a porcetagem do aumento: ";
    cin >> p;

    cout << v << " com um aumento de " << p << "% é: " << ((p / 100) * v) + v << endl;
}
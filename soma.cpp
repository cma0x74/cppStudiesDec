// script que soma dois valores
#include <iostream>

using namespace std;

int main() {
    float n1, n2;

    cout << "forneça um valor: ";
    cin >> n1;

    cout << "forneça mais um valor: ";
    cin >> n2;

    cout << "a soma entre " << n1 << " e " << n2 << " é igual a " << n1 + n2 << endl;
    return 0;
}

// por algum motivo o VS Code reconhece a biblioteca <iostream> como um erro mas o código compila e executa normalmente
//calcula antecessor e sucessor
#include <iostream>

using namespace std;

int main() {
    float n;

    cout << "digite um número: ";
    cin >> n;

    cout << "o antecessor de " << n << " é " << n - 1 << " e seu sucessor é " << n + 1 << endl;
    
    return 0;
}
// por algum motivo o VS Code reconhece a biblioteca <iostream> como um erro mas o código compila e executa normalmente
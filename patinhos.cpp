#include <iostream>
using namespace std;
int main()
{
    int patos;
    
    cout<< "Quantos patinhos foram passear? ";
    cin>> patos;

    while(patos > 1)
    {
        cout<< endl<< patos<< " Patinhos foram passear \n Alem das montanhas para brincar \n A mamae chamou: qua, qua, qua, qua\n Mas so "<< --patos<< " voltaram de la :( \n"<< endl;
    }

    cout<< "\n he died \n";
    return 0;
}
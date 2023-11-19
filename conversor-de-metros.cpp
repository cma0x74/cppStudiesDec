// converte metros em centímetros e em milímetros

#include <iostream>

using namespace std;

int main() {
    float metros;

    cout << "forneça um valor em metros: ";
    cin >> metros;

    cout << metros << "m = " << metros*100 << "cm" << endl;
    cout << metros << "m = " << metros*1000 << "mm" << endl;
    
    return 0;
}
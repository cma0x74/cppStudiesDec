//calcula área e quantidade de tinta necessária para tal pintar

//1L de tinta - 2m²

#include <iostream>

using namespace std;

int main() {
    float a, b, area, tinta;
    
    cout << "forneça um valor em metros: ";
    cin >> a;

    cout << "forneça mais um valor em metros: ";
    cin >> b;

    area = a*b;
    tinta = area/2;

    cout << "são necessários " << tinta << "L de tinta para pintar uma área de " << area << "m²"<< endl;

    return 0;
}
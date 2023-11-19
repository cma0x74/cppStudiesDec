// converte real em outras moedas ae
// USD dólar hoje (23/08/23): BRL R$4.86
// KRW won hoje: BRL R$0.0037
// JPY iene hoje: BRL R$0.034

#include <iostream>
#include <iomanip> // fixed & setprecision()

using namespace std;

int main() {
    float reais;

    cout << "forneça um valor em reais: ";
    cin >> reais;
    
    cout << fixed << setprecision(2) << "você possui " << reais*0.21 << " dólares, ou " << reais*273 << " wons ou " << reais*30 << " ienes" << endl;

    return 0;
}
// fixed & setprecision() --> utiliza-se para exibir apenas duas casas decimais após o ponto
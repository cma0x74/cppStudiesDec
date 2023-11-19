#include <iostream>

using namespace std;

int main() {
    bool brazilian;
    int num, idade;

    do{
        cout<<"digita 1 se tu és brasileiro ou 2 se não fores: ";
        cin>>num;

        if (num == 1)
        {
            brazilian = true;
        }

        else if (num == 2)
        {
            brazilian = false;
        }
        
        else{
            cout<<"opção inválida!!"<<endl;
        }
    } while (num != 1 && num != 2);

    cout<<"forneça sua idade: ";
    cin>>idade;

    if (brazilian == true && idade >= 16)
    {
        cout<<"você pode votar ✅"<<endl;
    }
    
    else if (brazilian == true && idade < 16)
    {
        cout<<"aguarde alguns anos para poder votar"<<endl;
    }
    
    else if (brazilian == false && idade >=16)
    {
        cout<<"você é fraco, lhe falta ser brasileiro"<<endl;
    }
    
    else{
        cout<<"você não pode votar ❌"<<endl;
    }

    return 0;
}
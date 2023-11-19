#include <iostream>

using namespace std;

struct carro{
    string nome, cor;
    int pot, vel, velMax;

    void inserir(string ins_nome, string ins_cor, int ins_pot, int ins_velMax){
        nome = ins_nome;
        cor = ins_cor;
        pot = ins_pot;
        velMax = ins_velMax;
        vel = 0;
    }

    void mudaVel(int newVel){
        vel = newVel;
        if(vel > velMax) vel = velMax;
        if(vel < 0) vel = 0;
    }

    void show(){
        cout<< endl<< "Nome: "<< nome<< endl;
        cout<< "Cor: "<< cor<< endl;
        cout<< "Potencia: "<< pot<< endl;
        cout<< "Current vel.: "<< vel<< endl;
        cout<< "Vel. Maxima: "<< velMax<< endl<< endl;
    }

}; //tem que ter ; após a declaração de struct >:(

int main()
{
    carro car1, car2;
    car1.inserir("Buggy", "Azul", 500, 350);
    car2.inserir("Ram", "Preto", 600, 400);
    car1.mudaVel(170);
    car2.mudaVel(150);

    cout<< "\nUR GARAGE \n";
    car1.show();
    car2.show();

    return 0;
}
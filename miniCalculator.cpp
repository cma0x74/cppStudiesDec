// script que efetua uma das quatro operações entre dois números

#include <iostream>

using namespace std;

int main()
{
   float num1, num2, result, n = 0;
   char again, operador;

   do
   {
        cout<<"forneça um valor: ";
        cin>>num1;

        cout<<"escolha a operação (+ - * /): ";
        cin>>operador;

        cout<<"forneça mais um valor: ";
        cin>>num2;

        switch (operador)
        {
            case '+':
                result = num1+num2;
                break;

            case '-':
                result = num1-num2;
                break;

            case '*':
                result = num1*num2;

                break;

            case '/':
                result = num1/num2;                
                break;
            
            default:
                n = 1;
                cout<<"operação inválida"<<endl;
                break;
        }

        if (n != 1)
        {
            cout<<num1<<" "<<operador<<" "<<num2<<" = "<<result<<endl;
        }
        
        //loop
        cout << "repeat? (s/n): ";
        cin >> again;

   } while (again == 's' || again == 'S');

   return 0;
}
#include <iostream>
using namespace std;
int main()
{
    string user = "Apolo";
    string *ponteiroTeste;
    
    ponteiroTeste = &user;
    cout << ponteiroTeste << endl << &user << endl << *ponteiroTeste;
    
    *ponteiroTeste = " olopA";
    cout<< *ponteiroTeste << user;
    return 0;
}
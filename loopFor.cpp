#include <iostream>
using namespace std;
int main(){
    int x, y, z;

    for(x=0, y=1, z=-1; x<=15; x+=3, y++, z+=2){
        cout<< x << "   " << y << "   "<< z <<endl;
    }

    cout<<"rotina finalizada!"<<endl;

    return 0;
}
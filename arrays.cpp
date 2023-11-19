#include <iostream>
using namespace std;
int main(){
    int vetor[10]{0,1,1,2,3,5,8,13,21,34};
    int i=0;

    for(i; i<sizeof(vetor)/sizeof(vetor[0]); i++){
        cout<<vetor[i]<<endl;
    }
    
    return 0;
}
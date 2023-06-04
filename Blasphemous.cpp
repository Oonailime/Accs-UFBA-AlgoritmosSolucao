#include <iostream>
using namespace std;

int main() {
    int entrada1;
    int vida,vida1;

    cin >> entrada1;
    int vetor[entrada1];

    for (int i=0;i<entrada1;i++)
        cin >> vetor[i];


    cin >> vida;

    vida1 = vida;
    
    for (int i=0;i<entrada1;i++){

        if(vetor[i]==1){
            vida1 = vida;
        }
        else{
            vida1-=vetor[i];
            if(vida1<1){
                break;
            }
        }

    }
    
    if(vida1<1){
        cout<<"You Died";
    }
    else{
        cout<<"Yes, you can";
    }


}
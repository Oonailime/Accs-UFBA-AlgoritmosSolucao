#include <iostream>
using namespace std;

int main() {
    int L,P, contador1=0,contador2=0;


    for(int i=0;i<3;i++){
        cin >> L >> P;
       contador1+=L;
       contador2+=P;
    }
    if(contador1>contador2){
        cout <<"Lucas";
    }
    else if(contador2>contador1){
        cout << "Pedro";
    }
    else{
        cout << "Empate";
    }

}
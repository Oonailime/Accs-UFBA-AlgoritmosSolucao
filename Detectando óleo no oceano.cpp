#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int entrada,N=0;
    float porcen,soma=0;
    
    cin >> entrada;

    for(int i=0;i<entrada;i++){
        cin >> N;
        soma += N;
        
    }
    porcen = soma/entrada;

    if(porcen<0.3){
        cout <<"Regiao segura";
    }
    else if(porcen>=0.3 &&porcen<=0.5){
        cout <<"Regiao em estado de alerta";
    }
    else if(porcen>0.5){
        cout <<"Regiao com alto indice de perda de biodiversidade";
    }


}
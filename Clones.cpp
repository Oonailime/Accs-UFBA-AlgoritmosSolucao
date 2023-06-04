#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int ondas, NarutoInicial,madara=1;
    string saida;
    cin >> ondas >> NarutoInicial;
    int zet, clones;
    for(int i=0;i<ondas;i++){
        cin >>zet >> clones;
        NarutoInicial = NarutoInicial+clones-zet;
        if(NarutoInicial<0){
            saida= "Madara venceu";
            madara = 0;
            
        }
        if( madara == 1){
            saida ="Naruto defendeu a Vila";
        }
    }

    cout << saida;
            
    
}
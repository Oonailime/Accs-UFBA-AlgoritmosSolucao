#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

struct Corredor {
    string nome;
    int matricula;
    float tempo;
    
};
bool compararPorTempo( Corredor a,  Corredor b) {
    if(a.tempo==b.tempo){
        return a.nome < b.nome;
    }
    else{
        return a.tempo < b.tempo;
    }
    
}

int main(){
    int entrada;
    cin >> entrada;
    vector<Corredor>karts(entrada);
    for (int i = 0; i < entrada; i++){
        cin >> karts[i].nome>>karts[i].matricula>> karts[i].tempo;
    }

    
    

    stable_sort(karts.begin(), karts.end(), compararPorTempo);

    for (int i = 0; i < entrada; i++){
        cout << karts[i].nome<<" "<<karts[i].matricula<<" "<< setprecision(1)<<fixed<< karts[i].tempo<<endl;
        
    }


}
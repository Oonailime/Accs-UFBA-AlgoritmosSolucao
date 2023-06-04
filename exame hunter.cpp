#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

struct Hunter {
    string nome;
    int Npart;
};
bool compararPorNome(const Hunter& candidato1, const Hunter& candidato2) {
    return candidato1.nome < candidato2.nome;
}

int main() {

    int entrada;
    cin >> entrada;
    vector<Hunter> hunters(entrada);
    for(int i=0; i<entrada;i++){
        cin >>hunters[i].Npart >>hunters[i].nome;
    }  
    sort(hunters.begin(),hunters.end(),compararPorNome);

    int tamanho = hunters.size();
    for (int i = 0; i < tamanho; i++) {
         cout << hunters[i].nome<<" "<<hunters[i].Npart<<endl;
    }





}
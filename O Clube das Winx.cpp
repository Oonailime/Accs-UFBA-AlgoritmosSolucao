#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int nentrada;
    cin >> nentrada;
    string musica;
    vector<string> musicas;


    for(int i = 0; i<nentrada ; i++ ){
        cin >> musica;
        musicas.push_back(musica);
    }
    sort(musicas.begin(), musicas.end());

    int tamanho = musicas.size();
    for (int i = 0; i < tamanho; i++) {
         cout << musicas[i]<<endl;
    }
}
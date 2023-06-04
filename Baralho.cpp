#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int nentradas;
    cin >> nentradas;
    vector<int>baralho;
    int carta;
    for(int i=0;i<nentradas;i++){
        cin >> carta;
        baralho.push_back(carta);
    }
    sort(baralho.begin(),baralho.end());

    int tamanho = baralho.size();
    for (int i = 0; i < tamanho; i++) {
         cout << baralho[i]<<" ";
    }








}
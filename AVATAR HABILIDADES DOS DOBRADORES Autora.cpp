#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;
struct Pessoa {
    
    int identificador;
    int elemento;
    
};

int main(){
    int entrada,saida = 1;
    cin >> entrada;
    vector<Pessoa>pessoas(entrada);

    for (size_t i = 0; i < entrada; i++)
    {
        cin >> pessoas[i].elemento;
    }
    for (size_t i = 0; i < entrada; i++)
    {
        cin >> pessoas[i].identificador;
    }
    int Nelemento;
    cin >> Nelemento;

    for (size_t i = 0; i < entrada; i++)
    {
        if(Nelemento==pessoas[i].elemento){
            cout << pessoas[i].identificador<<" ";
            saida = 0;
        }
        
    }
    if(saida){
        cout << "Nenhum";
    }

}
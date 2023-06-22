#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int linhas, colunas;
    char saida;
    int recorte;
    int soma=0;
    cin >> linhas>> colunas;

    int fazenda[linhas][colunas];

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            cin >> fazenda[i][j];
        }
    }

    cin >> saida >> recorte;

    if(saida == 'L'){
        for (int i = 0; i < colunas; i++)
        {
            soma += fazenda[recorte-1][i];
        }
        
    }
    else if(saida == 'C')
    {
        for (int i = 0; i < linhas; i++)
        {
            soma += fazenda[i][recorte-1];
        }
    }
    cout << soma;
    



}
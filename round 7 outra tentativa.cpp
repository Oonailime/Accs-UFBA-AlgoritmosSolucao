#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

int main()
{

    int entrada,posicao=0;
    cin >> entrada;
    int saltos[entrada];
    vector<int> pisados(entrada);

    for (int i = 0; i < entrada; i++)
    {
        cin >> saltos[i];
    }
    for (int i = 0; i < entrada; i++)
    {
        pisados[i] = 0;
    }


    
    for (int i = 0; i < entrada; i++)
    {
        if(saltos[i]+posicao<entrada){
            posicao += saltos[i];
            pisados[posicao] = 1;
        }
        else{
            pisados[entrada-1]=1;
            cout << "true"<<endl;
            break;
        }

    }
    pisados[0] = 1;

    if(pisados[entrada-1]==0){
        cout << "false"<<endl;
    }
    for (int i = 0; i < entrada; i++)
    {
        cout << pisados[i]<< " ";
    }
}
#include <iostream>
#include <vector>
using namespace std;

int main()
{ 
    int entrada,saida = 0,soma = 1;
    cin >> entrada;
    vector<int>pulos(entrada);
    for(int i=0;i<entrada;i++){
        cin >> pulos[i];
        soma += pulos[i];
        
        if(soma>=entrada){
            saida = 1;
        }
        if(soma<1){
            soma = 1;
        }
    }
    if(saida){
        cout << "true"<<endl;
    }
    else{
        cout << "false"<<endl;
    }

    return 0;


}
#include <iostream>
using namespace std;

int main(){
    int entrada=0, posicao=0,saida = 1;
    cin >> entrada;
    int pulos[entrada];
    int casas[entrada];
    for(int i=0;i<entrada;i++){
        cin >> pulos[i];
        casas[i] = 0;
    }
    if(entrada)
        casas[0] = 1;
    
    for(int i=0;i<entrada;i++){

        posicao += pulos[i];
        if(posicao>= entrada-1){

            cout << "true"<<endl;
            casas[entrada-1] = 1;
            for(int j = 0; j<entrada ;j++){
                cout << casas[j]<< " ";
            }
            
            saida = 0;
            break;
        }
        else if(posicao<0){
            posicao = 0;
        }
        else{
            casas[posicao] = 1;
        }
    }
    if(saida == 1){
        cout << "false"<<endl;
        for(int j = 0; j<entrada ;j++){
                cout << casas[j]<< " ";
            }
    }
}
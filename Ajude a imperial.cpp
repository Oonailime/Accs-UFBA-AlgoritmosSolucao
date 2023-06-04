#include <iostream>
using namespace std;

int main() {
    int entrada;
    cin >> entrada;
    int USADOS[entrada];
    float ACERTOS[entrada];
    int RESULTADO[entrada];

    for(int i =0;i<entrada;i++){
        cin >> USADOS[i];
    }
    for(int i =0;i<entrada;i++){
        cin >> ACERTOS[i];
    }
    for(int i =0;i<entrada;i++){
        if(USADOS[i] == 0 or ACERTOS[i] == 0){
            RESULTADO[i] = 0;
        }
        else{
            RESULTADO[i] = ((ACERTOS[i]/USADOS[i])*100);
        }
    }
    for(int i =0;i<entrada;i++){
        cout << RESULTADO[i]<< " ";
    }

}
#include <iostream>
using namespace std;

int main() {
    int entrada1,melhor = 3, vitorias = 0, derrotas = 0;

    for(int i = 1;i>0;i++){
        cin >> entrada1;
        if (entrada1==0){
            cout<< "Melhor de "<< melhor << "!" << endl;
            melhor += 2;
            derrotas+=1;

        }
        else{
            if(entrada1==1){
                vitorias+=1;
                if(vitorias>derrotas){
                    cout<< "A-ha, no final eu sempre venco!"<<endl;
                    break;
                }
            }
            else{
                cout<< "Voce sabe que eu iria te vencer no final"<<endl;
                break;
            }
        }
    }


}
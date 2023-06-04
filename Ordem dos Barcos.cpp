#include <iostream>
using namespace std;



void ordenarapido(int vet[], int esq, int dir){
    int pivo = esq, i,ch,j;         
    for(i=esq+1;i<=dir;i++){        
        j = i;                      
        if(vet[j] < vet[pivo]){     
            ch = vet[j];               
            while(j > pivo){           
                vet[j] = vet[j-1];      
                j--;                    
            }
            vet[j] = ch;               
            pivo++;                    
        }
    }
    if(pivo-1 >= esq){              
        ordenarapido(vet,esq,pivo-1);      
    }
    if(pivo+1 <= dir){              
        ordenarapido(vet,pivo+1,dir);      
    }
 }

int main(){
    int numerob;
    cin >> numerob;
    int barcos[numerob];
    for(int i=0;i<numerob;i++){
        cin >> barcos[i];
    }

    ordenarapido(barcos, 0, numerob-1);

    for(int i = numerob-1;i>=0;i--){
        cout << barcos[i]<< " ";
    }

}
#include <iostream>
using namespace std;
#include <vector>
#include <stack>


int main() {
    int entrada1,entrada2;
    

    cin >> entrada1 >> entrada2;

    int vet[entrada1];
    stack <int> vet1;


    for(int i=0;i<entrada1;i++)
        cin >> vet[i];

    for(int i = 0;i<entrada1;i++){
        if(vet[i]!=0){
            vet1.push(vet[i]);
        }

    }
    for(int i = 0;i<entrada2;i++){
        vet[i] = vet1.top();
        vet1.pop();

    }
    for(int i=entrada2-1;i>=0;i--){
        cout << vet[i]<<" ";
    }


}
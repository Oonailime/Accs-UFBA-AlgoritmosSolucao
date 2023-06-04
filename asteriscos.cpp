#include <iostream>
using namespace std;

int main() {
    int n;
    string espaco = " ";
    string asteris = "*";
    cout<<"Digite o valor de N: ";
    cin >> n;

     for(int i=0;i<n;i++){
        espaco += " ";
    }


    for(int i=1;i<=n;i++){
        for(int k=n;k>i;k--){
            cout<< " ";
        }
        for(int j=1;j<=i;j++){
            cout << "*";
        }

        cout<<endl;
    }



}
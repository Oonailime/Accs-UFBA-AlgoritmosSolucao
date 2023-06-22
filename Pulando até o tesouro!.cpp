#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n,totalp = 0,naopulou=0;
    cin >> n;
    vector<int>pulos(n);
    for(int i=0;i<n;i++){
        cin >> pulos[i];
    }
    int altura;
    cin >> altura;
    for (int i = 0; i < n; i++)
    {
        if(pulos[i]<=altura){
            totalp+=1;
        }
        else{
            naopulou = 1;
            break;
        }
    }
    if(naopulou){
        cout << totalp<<endl<<"0"<<endl;
    }
    else{
        cout << totalp<<endl<<"1"<<endl;
    }
    
    

}
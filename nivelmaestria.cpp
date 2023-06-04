#include <iostream>
using namespace std;

int main(){
    
    int vet[6];
    int acumulador = 0;

    for(int i=0;i<6;i++){
        cin >> vet[i];
    }
    
    for(int i=0;i<6;i++){
        acumulador = vet[i] + acumulador;
        
    }

    if(acumulador >= 250){
        cout << "S+"<<endl;
    }
        else if(acumulador>=200){
            cout << "S"<<endl;
        }
            else if(acumulador>=180){
                cout << "S-"<<endl;
            }
                else if(acumulador>=150){
                    cout << "A+"<<endl;
                }
                    else if(acumulador>=100){
                        cout << "A"<<endl;
                    }
                        else if(acumulador>=80){
                            cout << "A-"<<endl;
                        }
                            else if(acumulador>=60){
                                cout << "B+"<<endl;
                            }
                                else if(acumulador>=40){
                                    cout << "B"<<endl;
                                }
                                    else if(acumulador<40){
                                        cout << "B-"<<endl;
                                    }


}
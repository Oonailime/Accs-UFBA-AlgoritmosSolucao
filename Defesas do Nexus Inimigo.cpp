#include <iostream>
using namespace std;

int main() {
    int torres, inibidores, tnexus;

    cin>>torres>>inibidores>> tnexus;

    if((tnexus-2)==0){
        cout << "VITORIA";
    }
    else{
        cout << 9-torres<< " "<< 3 - inibidores<< " "<< 2-tnexus;


    }


}
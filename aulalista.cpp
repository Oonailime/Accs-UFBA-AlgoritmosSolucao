#include <iostream>
#include <list>
using namespace std;

int main() {

    list<int> lista;
    list<int> :: iterator it;

    for(int i=0; i<10;i++){
        lista.push_front(i);

    }

    it = lista.begin();
    advance(it,5);
    lista.insert(it,0);



    for(int i=0; i<10;i++){
        cout << lista.back()<<endl;
        lista.pop_back();
    
    }


}
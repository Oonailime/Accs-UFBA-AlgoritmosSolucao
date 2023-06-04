#include <iostream>
using namespace std;

int main() {
  int entrada1,aux,aux2,aux3;
  
  cin >> entrada1;
  aux = entrada1%10;
  aux2 = ((entrada1%100)/10);
  aux3 = entrada1/100;
  cout << aux <<" " << aux2 <<" " << aux3 <<endl;
  
}
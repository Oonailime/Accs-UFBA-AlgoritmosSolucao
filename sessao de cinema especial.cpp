#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Filme
{
    int ano;
    string nome;
    string categoria;
    string horario;

};




int main() {
    
 int entradas;
 int saida = 0;
 cin >> entradas;
 vector <Filme> filmes(entradas);
 
 for(int i=0;i<entradas;i++){

    cin >> filmes[i].ano>> ws;
    getline(cin,filmes[i].nome) ;
    getline(cin,filmes[i].categoria);
    getline(cin,filmes[i].horario);


 }
 
 string escolha;
 getline(cin,escolha);


//assumi que só entradas com 20 de inicio serão de escolhas de ano
// caso algum titulo de filme comece com 20 será interpretado como 

 if(escolha[0]=="2" && escolha[1]=="0"){





 }

 for(int i=0;i<entradas;i++){

    cout <<"S: "<< filmes[i].ano<<endl;
    cout <<"S: "<< filmes[i].nome<<endl;
    cout <<"S: "<< filmes[i].categoria<<endl;
    cout <<"S: "<< filmes[i].horario<<endl;



 }





}
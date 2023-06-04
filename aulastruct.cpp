#include <iostream>
using namespace std;


struct Data
{
    int dia;
    int mes;
    int ano;
};



struct Pessoa{

    int idade;
    Data data;
    string sexo;
    string nome;

};


void imprimirPessoa(Pessoa p){

    cout <<"Nome: " << p.nome << "\n";
    cout <<"Idade: " << p.idade << "\n";
    cout <<"Sexo: " << p.sexo << "\n";
    cout << "Data de nascimento: "<< p.data.dia<< "/"<<p.data.mes<<"/"<< p.data.ano<<"\n"; 

}


Pessoa lerPessoa(){

    Pessoa pessoa1;

    cout<< "Digite aqui o nome: ";
    cin >> pessoa1.nome;
 
    cout<< "Digite aqui a idade atual: ";
    cin >> pessoa1.idade;

    cout<< "Digite aqui o dia, mes e ano do nacimento separados por espaco: ";
    cin >> pessoa1.data.dia; 
    cin >> pessoa1.data.mes;
    cin >> pessoa1.data.ano;

    cout<< "Digite aqui o sexo: ";
    cin >> pessoa1.sexo;

    return pessoa1;

}



int main() {
    
    Pessoa pessoa;
    pessoa = lerPessoa();
    imprimirPessoa(pessoa);

}
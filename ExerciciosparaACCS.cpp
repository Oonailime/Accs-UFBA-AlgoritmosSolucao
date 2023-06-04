#include <iostream>
using namespace std;



int buscalinear(int vetor[], int tamanho, int numero){
    for (int i = 0; i < tamanho; i++){
        if (numero == vetor[i]){
            return i;
        }
        
    }
    return -1;
}







int main(){

    int vetordomain[]={15,23,7,45,87,16};
    int entrada;

    cout << "Bote aqui um inteiro qualquer da lista: \n";
    cin >> entrada;

    int resultado = buscalinear(vetordomain,6,entrada);

    if (resultado >= 0)
    {
        cout << "O numero: "<< vetordomain[resultado]<<" esta na posicao: "<< resultado <<" do vetor. " << endl;
    }
    else
    {
        cout<< "O numero "<< entrada << " nao esta na lista" << endl;
    }

}
#include <stdio.h>
#include <stdlib.h>

// Trabalho realizado por Emiliano José Guimarães De Almeida Calado e Pedro Elias Pribanic Fonseca

typedef struct no
{
    int valor;
    struct no *esquerdo, *direito;
    short altura;

} No;

No *novoNo(int v)
{
    No *novo = malloc(sizeof(No));

    if (novo)
    {
        novo->valor = v;
        novo->esquerdo = NULL;
        novo->direito = NULL;
        novo->altura = 0;
    }
    else
    {
        printf("\nErro ao alocar valor na memória!");
    }
    return novo;
}

short maior(short a, short b)
{
    return (a > b) ? a : b;
}

short alturaDoNo(No *no)
{
    if (no == NULL)
        return -1;
    else
        return no->altura;
}

short fatorDeBalanceamento(No *no)
{
    if (no)
        return (alturaDoNo(no->esquerdo) - alturaDoNo(no->direito));
    else
        return 0;
}


No* rotacaoDireita(No *desbalanceado)
{
    No *filhoEsquerdo,*netoDireito;

    filhoEsquerdo = desbalanceado->esquerdo;
    //variavel auxiliar para guardar o filho direito do novo pai
    netoDireito = filhoEsquerdo->direito;

    
    filhoEsquerdo->direito = desbalanceado;
    desbalanceado->esquerdo = netoDireito;

    desbalanceado->altura = maior(alturaDoNo(desbalanceado->esquerdo), alturaDoNo(desbalanceado->direito)) + 1;
    filhoEsquerdo->altura = maior(alturaDoNo(filhoEsquerdo->esquerdo), alturaDoNo(filhoEsquerdo->direito)) + 1;

    return filhoEsquerdo;
}

No* rotacaoEsquerda(No *desbalanceado)
{

    No *filhoDireito, *netoEsquerdo;

    filhoDireito = desbalanceado->direito;
    //variavel auxiliar para guardar o filho esquerdo do novo pai
    netoEsquerdo = filhoDireito->esquerdo;

    filhoDireito->esquerdo = desbalanceado;
    desbalanceado->direito = netoEsquerdo;

    desbalanceado->altura = maior(alturaDoNo(desbalanceado->esquerdo), alturaDoNo(desbalanceado->direito)) + 1;
    filhoDireito->altura = maior(alturaDoNo(filhoDireito->esquerdo), alturaDoNo(filhoDireito->direito)) + 1;

    return filhoDireito;
}

No* rotacaoDireitaEsquerda(No* desbalanceado){
    desbalanceado->direito = rotacaoDireita(desbalanceado->direito);
    return rotacaoEsquerda(desbalanceado);
}

No* rotacaoEsquerdaDireita(No* desbalanceado){
    desbalanceado->esquerdo = rotacaoEsquerda(desbalanceado->esquerdo);
    return rotacaoDireita(desbalanceado);
}


No* balancear (No *raiz){
    short fb = fatorDeBalanceamento(raiz);

    if(fb < -1 && fatorDeBalanceamento(raiz->direito) <= 0)
        raiz = rotacaoEsquerda(raiz);
    else if(fb > 1 && fatorDeBalanceamento(raiz->esquerdo) >= 0)
        raiz = rotacaoDireita(raiz);
    else if(fb > 1 && fatorDeBalanceamento(raiz->esquerdo) < 0)
        raiz = rotacaoEsquerdaDireita(raiz);
    else if(fb < -1 && fatorDeBalanceamento(raiz->direito) > 0)
        raiz = rotacaoDireitaEsquerda(raiz);
    return raiz;
}

No * inserir(No *raiz, int v){
    if (raiz==NULL)
        return novoNo(v);
    else{
        if(v < raiz->valor)
            raiz->esquerdo = inserir(raiz->esquerdo, v);
        else if(v>raiz->valor)
            raiz->direito = inserir(raiz->direito, v);
        else
            printf("\nErro ao adicionar item, talvez ele já exista!\n");
    }

    //recalcula a altura dos nos
    raiz->altura = maior(alturaDoNo(raiz->esquerdo), alturaDoNo(raiz->direito)) + 1;

    //verifica a necessidade de balancear a arvore
    raiz = balancear(raiz);
    return raiz;

} 

// Percorrer em pre ordem
void preOrdem(No *arvore){
    if(arvore==NULL){
        return;
    }
    else{
        printf("%d ",arvore->valor);
        preOrdem(arvore->esquerdo);
        preOrdem(arvore->direito);
    }
}

int main(){
    int escolha, valor;
    No *raiz = NULL;

    do
    {
        printf("\n+-------------------------------------------+");
        printf("\n|                   MENU                    |");
        printf("\n|           Selecione uma opcao             |");
        printf("\n+-------------------------------------------+");
        printf("\n| 0 - Encerrar programa                     |");
        printf("\n| 1 - Inserir um valor na arvore            |");
        printf("\n| 2 - Percorrer em pre ordem                |");
        printf("\n+-------------------------------------------+\n");

        scanf("%d", &escolha);

        switch (escolha)
        {

        case 0:

            break;
        case 1:
            printf("Digite o valor a ser inserido: ");
            scanf("%d", &valor);
            raiz = inserir(raiz,valor);
            break;
        case 2:

            preOrdem(raiz);
            printf("\n");

            break;
        }
        
    }while (escolha!=0);
    
}







 
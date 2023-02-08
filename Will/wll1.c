#include <stdio.h>

void init(int size, int ta[], int tb[], int tc[]);
void print_torres (int ta[], int tb[], int tc[]);
int move(int de[], int para[]);
int resolve(int size, int ta[], int tb[], int tc[]);

int main () {
    int ta[1000], tb[1000], tc[1000];
    int size = 40;
    int resultadomove;
    init(size, ta, tb, tc);
    print_torres(ta, tb, tc);

    resolve(size, ta, tb, tc);

    print_torres(ta, tb, tc);
}

void init(int size, int ta[], int tb[], int tc[]) {
    // inicializar os 3
    for(int i = 0; i <= size; i++) {
        ta[i] = size - i;
    }

    tb[0] = 0;
    tc[0] = 0;
}

void print_torre(int t[], int n) {
    printf("Torre %d: ", n);
    for (int i = 0 ; t[i] != 0 ; i++){
        printf("%d ",t[i]);
    }
    printf("\n");
} 

void print_torres (int ta[], int tb[], int tc[]) {
    printf("********************************\n");
   print_torre(ta, 1);
   print_torre(tb, 2);
   print_torre(tc, 3);
}

int move(int de[], int para[]) {
    // basico - Mal programador faria...
    // descobrir a posicao do ultimo numero de "de" - int pde;
    // descobrir a posicao do zero do "para" - int ppara;
    // atribuir o valor da posicao pde de "de", na posicao ppara de "para";
    // atribuir zero no "novo final" de "de" (pde)
    // atribuir zero no "novo final" de "para" (ppara + 1)
    int pde = -1, ppara = 0;

    for (int i = 0; de[i] != 0; i++){
        pde = i;
    }

    for (int i = 0; para[i] != 0; i++){
        ppara = i+1;
    }
    // Evitar bater cabeça

    // se eu for tentar tirar de uma torre vazia, retorna 1 (não faz nada).
    if (pde == -1) {
        return 1;
    }
    // se eu for tentar colocar uma peça maior em cima de uma menor, retorna 2 (não faz nada).
    if (ppara != 0 && de[pde] > para[ppara - 1]) {
        return 2;
    }
    // beleza, tudo bonito
    para[ppara] = de[pde];
    de[pde] = 0;
    para[ppara + 1] = 0;
    return 0;
}

void resolve_rec(int size, int ta[], int tb[], int tc[], int de[], int para[], int outro[]) {
    if(size == 1) {
        move(de, para);
        print_torres(ta, tb, tc);
        return;
    }
    resolve_rec(size - 1, ta, tb,tc, de, outro, para);
    move(de, para);
    print_torres(ta, tb, tc);
    resolve_rec(size -1, ta, tb,tc, outro, para, de);
}

int resolve(int size, int ta[], int tb[], int tc[]) {
    resolve_rec(size, ta, tb, tc, ta, tb, tc);
}
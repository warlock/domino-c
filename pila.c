#include <stdio.h>
#include "pila.h"
#include <stdlib.h>
#include <time.h>

void swap (t_ficha *a, t_ficha *b) {
    t_ficha temp = *a;
    *a = *b;
    *b = temp;
}

void randomize (t_pila *t, int n ) {
    srand ( time(NULL) );
    for (int i = n-1; i > 0; i--) {
        int j = rand() % (i+1);
        swap(&t->f[i], &t->f[j]);
    }
}

void inicializar_pila(t_pila *p_pi) {
    int i, j, k=0;;

    for(int i=0;i<=NUM_MAS_ALTO;i++){
        for(j=0;j<=i;j++){
            p_pi->f[k].a=i;
            p_pi->f[k].b=j;
            k++;}
    }
    p_pi->n_fichas=k;

    randomize(p_pi, p_pi->n_fichas);
}

void imprimir_pila(t_pila pi, int visible){
    int i;
    printf("Pila: ");
    for(i=0;i<pi.n_fichas;i++){
        if(visible==TRUE){
            printf("%d:%d|", pi.f[i].a, pi.f[i].b);}
        else printf("?:?|");
    }
}

t_ficha coger_ficha_de_la_pila(t_pila *p_pi){
    int i, aleatorio;
    t_ficha f;
    srand(time(NULL));
    aleatorio=rand()%p_pi->n_fichas+1;
    f=p_pi->f[aleatorio];
    for(i=aleatorio;i<p_pi->n_fichas;i++){
        p_pi->f[i+1]=p_pi->f[i+1];
    }
    p_pi->n_fichas--;
    return f;
}

int esta_pila_esta_vacia(t_pila pi){
    if(pi.n_fichas!=0) return 0;
    else return 1;
}

#include <stdio.h>
#include "ficha.h"

void inicializar_ficha(t_ficha *p_f, int a, int b){
    p_f->a=a;
    p_f->b=b;
}
void girar_ficha(t_ficha *p_f){
    int aux;
    aux=p_f->a;
    p_f->a=p_f->b;
    p_f->b=aux;
}
void imprimir_ficha(t_ficha f, int visible){
    if(visible==TRUE){
            printf("%d:%d|", f.a, f.b);}
        else printf("?:?|");
}

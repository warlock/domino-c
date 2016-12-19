#include <stdio.h>
#include "mesa.h"

void inicializar_mesa(t_mesa *p_m){    
    p_m->n_fichas=0;
    p_m->f[p_m->n_fichas];
}
void imprimir_mesa(t_mesa m){
        int i;
    for(i=0;i<m.n_fichas;i++)
    {
    printf("%d:%d|",m.f[i].a, m.f[i].b);
    } 
        
}

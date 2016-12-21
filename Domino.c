#include <stdio.h>
#include "pila.h"
#include "ficha.h"
#include "jugador.h"
#include "partida.h"
#include "mesa.h"

int main (){

    t_pila t;

    t_jugador g;

    t_partida partida;
    
    t_jugadores *p_nj,*p_nf,js;

    inicializar_partida(&partida);

    inicializar_pila(&t);


    printf("%d\n", t.n_fichas);

    for(int j = 0; j < t.n_fichas; j++) {
      printf("%d - %d\n", t.f[j].a, t.f[j].b);
    }
    
    que_jugador_tiene_doble_mas_alto(&js,&*p_nj->j,&*p_nf->j);

    //randomize(&t, t.n_fichas);
    /*printf("---------------\n" );

    for(int j = 0; j < t.n_fichas; j++) {
      printf("%d - %d\n", t.f[j].a, t.f[j].b);
    }*/

    //imprimir_pila(t,1);

    //imprimir_mesa(partida.m);
    return 0;
}

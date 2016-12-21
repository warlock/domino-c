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

    inicializar_partida(&partida);

    inicializar_pila(&t);


    printf("%d\n", t.n_fichas);

    for(int j = 0; j < t.n_fichas; j++) {
      printf("%d - %d\n", t.f[j].a, t.f[j].b);
    }

    printf("\nNUMERO DE FICHAS JUGADOR: %d\n", partida.js.j[0].n_fichas);

    printf("\nNUMERO DE FICHA: %d\n", partida.js.j[0].f[0].a);

    //que_jugador_tiene_doble_mas_alto(partida.js,*partida.js[0],*partida.js[1]);

    //randomize(&t, t.n_fichas);
    /*printf("---------------\n" );

    for(int j = 0; j < t.n_fichas; j++) {
      printf("%d - %d\n", t.f[j].a, t.f[j].b);
    }*/

    //imprimir_pila(t,1);

    //imprimir_mesa(partida.m);
    return 0;
}

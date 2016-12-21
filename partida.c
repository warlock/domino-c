#include <stdio.h>
#include "partida.h"

void inicializar_partida(t_partida *p_pa)
{
    int u_j, n_j, i, j, n_jugadores, doble_j, doble_f;
    char t_j;
    printf("¿Numero de jugadores?: [2-4]");
    scanf("%d",&u_j);
    p_pa->js.n_jugadores = u_j;
    printf("¿Un jugador humano?: [s/n]");
    scanf("%c",&t_j);
    if(t_j=='s')p_pa->js.un_humano=T_HUMANO;
    else if(t_j=='n')p_pa->js.un_humano=T_ROBOT;

    inicializar_pila(&p_pa->pi);

    for (int i = 0; i < p_pa->js.n_jugadores; i++) {
      t_jugador p;
      p.n_fichas = 7;
      for(int j = 0; j < p.n_fichas; j++) {
          p.f[j] = coger_ficha_de_la_pila(&p_pa->pi);
      }
      p.tipo = 1;
      p_pa->js.j[i] = p;
    }

    //JUGADOR DOBLE MAS ALTO?
}
void imprimir_estado_partida(t_partida pa){

}
void realizar_jugada(t_partida *p_pa){

}

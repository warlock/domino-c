#include <stdio.h>
#include "partida.h"

void inicializar_partida(t_partida *p_pa)
{
    int u_j, n_j, i, j, n_jugadores, doble_j, doble_f;
    char t_j;
    printf("¿Numero de jugadores?: [2-4]");
    scanf("%d",&u_j);
    p_pa->js.n_jugadores=n_j;
    printf("¿Un jugador humano?: [s/n]");
    scanf("%c",&t_j);
    if(t_j=='s')p_pa->js.un_humano=T_HUMANO;
    else if(t_j=='n')p_pa->js.un_humano=T_ROBOT;

    inicializar_pila(&p_pa->pi);

     n_jugadores=p_pa->js.n_jugadores;
     for(int i = 0; i < n_jugadores; i++){
         for(int j = 0; j < NUM_INICIAL_FICHAS_JUGADOR; j++){
             p_pa->js.j[i].f[j]=coger_ficha_de_la_pila(&p_pa->pi);
         }
     }
     que_jugador_tiene_doble_mas_alto(p_pa->js, &doble_j, &doble_f);
     p_pa->js.turno=doble_j;
}
void imprimir_estado_partida(t_partida pa){

}
void realizar_jugada(t_partida *p_pa){

}

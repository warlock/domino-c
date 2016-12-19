#include <stdio.h>
#include "pila.h"
#include "ficha.h"
#include "jugador.h"
#include "partida.h"
#include "mesa.h"

main(){
   
    t_pila t;
  
    t_jugador g;
    
    t_partida partida;
    
    inicializar_partida(&partida);
    
    inicializar_pila(&t);
   
    imprimir_pila(t,1);
    
    imprimir_mesa(partida.m);

}

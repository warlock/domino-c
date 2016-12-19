#include <stdio.h>
#include "jugador.h"

void imprimir_jugador(t_jugador j, int visible){
    int i;
    
    for(i=0;i<j.n_fichas;i++){
        imprimir_ficha(j.f[i], visible);}   
    if(j.tipo==TRUE)printf(T_HUMANO_STR);
    else if(j.tipo=FALSE)printf(T_ROBOT_STR);
    
}
void imprimir_jugadores(t_jugadores js, int visible){
    int i;
    
        for(i=0;i<js.n_jugadores;i++){
            printf("J%d:  ", i);
            imprimir_jugador(js.j[i], visible);                
        }       
    
     
}
void que_jugador_tiene_doble_mas_alto(t_jugadores js, int *p_nj, int *p_nf){
    int i, j, dobles=0, masAlto, dobleAnt, dobleAct, p_njAux,p_nfAux;
    for(i=0;i<js.n_jugadores;i++){
        for(j=0; j<js.j[i].n_fichas;j++){
            if(js.j[i].f[j].a==js.j[i].f[j].b){
                    *p_nj=i;
                    *p_nf=j;
                    dobles++;
                    dobleAnt=dobleAct;    
                    dobleAct=js.j[*p_nj].f[*p_nf].a;
                    if(dobles>1){
                        if(dobleAnt>dobleAct){
                            masAlto=dobleAnt;
                            p_nj=p_njAux;
                            p_nf=p_nfAux;}
                    else if(dobleAct>dobleAnt){
                            masAlto=dobleAct;
                            p_nj=*p_nj;
                            p_nf=*p_nf;}
                    }
                    p_njAux=*p_nj;
                    p_nfAux=*p_nf;
            }
        }
        //DOBLE MAS ALTO    
    }
    
    
}
void pasar_turno(t_jugadores *p_js){

    int pos;
    
    pos=p_js->turno++;
    if(pos>=p_js->n_jugadores)pos=0;
    
    p_js->turno=pos;
    p_js->j[pos];
}

void imprimir_turno(t_jugadores _js){

    printf("Turno %d", _js.turno);
}


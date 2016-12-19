#ifndef TIRADA_H
#define TIRADA_H

#include "ficha.h"
#include "jugador.h"
#include "mesa.h"

#define MAX_TIRADAS_JUGADOR	NUM_FICHAS_DOMINO
#define NO_F			-1 // Tiene que ser negativo

typedef struct {
	int n_ficha;	// numero de ficha en el vector de fichas del jugador
	int n_ficha2;	// numero de ficha2 (solo para doble doblarse)
			// EXTRA DOBLE DOBLARSE
			// Doble doblarse pasa con muy poca frequencia
	char extremo;	// IZQUIERDA o DERECHA (de n_ficha(1))
	int girada;	// TRUE o FALSE
} t_tirada;

typedef struct {
	int		n_tiradas;
	t_tirada	t[MAX_TIRADAS_JUGADOR];
} t_tiradas;

void imprimir_tirada(t_tirada ts, t_jugador j);
void imprimir_tiradas(t_tiradas ts, t_jugador j);
t_tiradas calcular_tiradas_posibles(t_jugador j, t_mesa m);

#endif // TIRADA_H


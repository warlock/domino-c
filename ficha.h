#ifndef FICHA_H
#define FICHA_H

#define FALSE	0
#define TRUE	1

#define NUM_MAS_ALTO			6
#define NUM_INICIAL_FICHAS_JUGADOR	7
#define NUM_FICHAS_DOMINO		28

#define NO_GIRADA	0
#define GIRADA		1

typedef struct {
	int a,b;	// Los dos nums de la ficha
} t_ficha;

void inicializar_ficha(t_ficha *p_f, int a, int b);
void girar_ficha(t_ficha *p_f);
void imprimir_ficha(t_ficha f, int visible);
// EXTRA: Ficha 2D
void imprimir_ficha_2d_l1(t_ficha f);
void imprimir_ficha_2d_l2(t_ficha f);
void imprimir_ficha_2d_l3(t_ficha f);
int es_un_doble(t_ficha f);
// EXTREi: heuristica robot
int cuantas_fichas_con_num(int nf, t_ficha f[], int n);

#endif // FICHA_H


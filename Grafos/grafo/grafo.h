/*
 * grafo.h
 *
 *  Created on: Nov 18, 2016
 *      Author: xtarke
 */

#ifndef GRAFO_H_
#define GRAFO_H_

#define MAX_VERTICES 50

#define TRUE 1
#define FALSE 0

#define TAM 5 //<!Define o tamanho da matriz adja

typedef struct vertices vertice_t;
typedef struct   arestas aresta_t;
typedef struct     grafos grafo_t;

grafo_t *cria_grafo(int vertices);
void libera_grafo (grafo_t *g);

int cria_adjacencia(grafo_t *g, int u, int v);

int rem_adjacencia (grafo_t *g, int u, int v);

int adjacente      (grafo_t *g, int u, int v);

void BFS (grafo_t *g, vertice_t *id);//!<Breadth_First_Search

void DFS (grafo_t *g, vertice_t *id);

#endif /* GRAFO_H_ */

#define MAX_SIZE 10
#include "stdlib.h"
#include "stdio.h"

typedef struct {
  int vertices[MAX_SIZE];
  int adjMat[MAX_SIZE][MAX_SIZE];
  int size;
} GraphAdjMat;

GraphAdjMat* newGraphAdjMat () {
  GraphAdjMat* graph = (GraphAdjMat*)malloc(sizeof(GraphAdjMat));
  graph -> size = 0;

  for (int i = 0; i < MAX_SIZE; i++) {
    for (int j = 0; j < MAX_SIZE; j++) {
      graph ->adjMat[i][j] = 0
    }
  }

  return graph;
}

void delGraphAdjMat (GraphAdjMat* graph) {
  free(graph);
}

void addVertix (GraphAdjMat* graph, int val) {
  if (graph -> size === MAX_SIZE) {
    fprintf(stderr, 'graph max size reached.');
    return;
  }

  int n = graph -> size;
  graph -> vertices[n] = val;

  for (int i = 0; i < n; i++) {
    graph -> adjMat[i][n] = graph -> adjMat[n][i] = 0;
  }

  graph -> size++;
}

void deleteVertix(GraphAdjMat* graph, int index) {
  
}
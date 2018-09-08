#ifndef TOPOLOGICAL_H_INCLUDED
#define TOPOLOGICAL_H_INCLUDED
#include <stdlib.h>
#include <time.h>
#include <stdio.h>



int cycle_check(int adjacent_matrix[4][4], int no_of_vertices, int x[10]);
void sorting(int adjacent_matrix[4][4], int x[4], int no_of_vertices);
void DFS(int i, int n, int visited[4], int adjacent_matrix[4][4]);
void dfssort(int visited[4], int adjacent_matrix[4][4], int no_of_vertices);





#endif

#include "topological.h"

void DFS(int i, int n, int visited[4], int adjacent_matrix[4][4]) {

	int j;
	visited[i] = 1;
	for (j = 0; j < n; j++) {
		if (!visited[j] && adjacent_matrix[i][j] == 1) {
			DFS(j, n, visited, adjacent_matrix);
		}
	}
}

void dfssort(int visited[4], int adjacent_matrix[4][4], int no_of_vertices){

    int i, j, inDeg[no_of_vertices];
    for(i = 0; i < no_of_vertices; i++){
        inDeg[i] = 0;
    }
    DFS(0, no_of_vertices, visited, adjacent_matrix);
	for (i = 0; i < no_of_vertices; i++) {
		for (j = 0; j < no_of_vertices; j++) {
			inDeg[i] = inDeg[i] + adjacent_matrix[j][i];
		}
	}
	printf("\nThe topological order using DFS is: ");
	for (i = 0; i < no_of_vertices; i++) {
		if (visited[i] == 0 && inDeg[i] == 0) {
			printf("%d  ", i);
		}
	}
	for (i = 0; i < no_of_vertices; i++) {
		if (visited[i] == 1) {
			printf("%d  ", i);
		}
	}
	for (i = 0; i < no_of_vertices; i++) {
		if (visited[i] == 0 && inDeg[i]) {
			printf("%d  ", i);
		}
	}
}


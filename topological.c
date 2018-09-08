#include "topological.h"

void sorting(int adjacent_matrix[4][4], int x[4], int no_of_vertices) {

	int indeg[no_of_vertices], i, j, k, count = 0;
	for (i = 0; i < no_of_vertices; i++) {
		indeg[i] = 0;
		x[i] = 0;
	}

	for (i = 0; i < no_of_vertices; i++) {
		for (j = 0; j < no_of_vertices; j++) {
			indeg[i] = indeg[i] + adjacent_matrix[j][i];
		}
	}
	printf("\nThe topological order is: ");

	while (count < no_of_vertices) {
		for (k = 0; k < no_of_vertices; k++) {
			if ((indeg[k] == 0) && (x[k] == 0)) {
				printf("%d  ", k);
				x[k] = 1;
			}
			for (i = 0; i < no_of_vertices; i++) {
				if (adjacent_matrix[i][k] == 1) {
					indeg[k]--;
				}
			}
		}
		count++;
	}
}

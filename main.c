
#include "topological.h"
#define no_of_vertices 4

/**Sortare topologica
*/
/**O sortare topologica a varfurilor unui graf orientat aciclic este o operatie de ordonare liniara a varfurilor, astfel incat, daca exista un arc ( i, j ), atunci i apare inaintea lui j in aceasta ordonare.


*/
int visited[no_of_vertices];
int adjacent_matrix[no_of_vertices][no_of_vertices];
int x[no_of_vertices];



int main()
{   /** Citirea matricei dintr un fisier dat.
   */
        FILE *file_in;
    int iterator_rows;
    int iterator_columns;
    int aux;
    file_in = fopen("data.in", "r");
    if (file_in == NULL){
        printf("\n File does not exist.");
        fclose(file_in);
    }



    for (iterator_rows = 0; iterator_rows < no_of_vertices; iterator_rows++ ){
        for (iterator_columns = 0; iterator_columns< no_of_vertices; iterator_columns++ ){
             fscanf(file_in, "%d ", &aux);
             adjacent_matrix[iterator_rows][iterator_columns]=aux;
        }
    }
    fclose(file_in);
    printf("=== Reading from file successfull ===\n");
     for (iterator_rows = 0; iterator_rows < no_of_vertices; iterator_rows++ ){
        for (iterator_columns = 0; iterator_columns< no_of_vertices; iterator_columns++ ){

             printf("%d  ",adjacent_matrix[iterator_rows][iterator_columns]);
        }
        printf("\n");
    }
    /** Rezolvarea problemei cu ajutorul a 2 functii. 
    */
        printf("\n");
        printf("Sortare topologica\n");
        sorting(adjacent_matrix, x, no_of_vertices);
        printf("\n");printf("\n");

        printf("Sortare topologica cu DFS\n");
        dfssort(visited, adjacent_matrix, no_of_vertices);
        printf("\n");


	return 0;
}

all: hello

hello: main.o dfs.o topological.o
	gcc main.o dfs.o topological.o -o hello

main.o: main.c
	gcc -c main.c

dfs.o: dfs.c
	gcc -c dfs.c

topological.o: topological.c
	gcc -c topological.c
	
clean:
	rm *o hello
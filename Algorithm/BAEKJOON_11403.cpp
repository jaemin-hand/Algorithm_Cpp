#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main(void) {
	int N = 0;
	scanf("%d", &N);
	
	int **graph = (int **)malloc(N * sizeof(int*));

	for (int i = 0; i < N; i++) {
		graph[i] = (int*)malloc(sizeof(int) * N);
	}

	for (int i = 0; i < N; i++) {
		for (int ii = 0; ii < N; ii++) {
			scanf("%d", &graph[i][ii]);
		}
	}

	for (int i = 0; i < N; i++) {
		for (int ii = 0; ii < N; ii++) {
			if (graph[ii][i] == 0) continue;
			for (int iii = 0; iii < N; iii++) {
				if (graph[i][iii]) {
					graph[ii][iii] = 1;
				}
			}
		}
	}
	
	for (int i = 0; i < N; i++) {
		for (int ii = 0; ii < N; ii++) {
			printf("%d ", graph[i][ii]);
		}
		printf("\n");
	}



	for (int i = 0; i < N; i++) {
		free(graph[i]);
	}
	free(graph);
	

	return 0;
}
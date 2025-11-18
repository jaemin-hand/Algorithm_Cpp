#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main() {
	int N = 0, M = 0;
	scanf("%d %d", &N,&M);
	int* array = (int*)malloc(sizeof(int) * N);
	for (int i = 0; i < N; i++) {
		array[i] = i + 1;
	}
	
	for (int turn = 0; turn < M; turn++) {
		int i, ii;
		scanf("%d %d", &i, &ii);
		for (int left = i - 1, right = ii - 1; left < right; left++, right--) {
			int temp = array[left];
			array[left] = array[right];
			array[right] = temp;
		}
	}
	
	for (int i = 0; i < N; i++) {
		printf("%d ", array[i]);
	}

	return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main(void) {
	static int array[10];
	static int compare[42];
	for (int i = 0; i < 10; i++) {
		scanf("%d", &array[i]);
		int temp = array[i] % 42;
		compare[temp] = 1;
	}
	int counter = 0;
	for (int i = 0; i < 42; i++) {
		counter += compare[i];
	}
	printf("%d", counter);

	return 0;
}

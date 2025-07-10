#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int N = 0, M = 0;
    scanf("%d %d", &N, &M); 

    int basket[101];
    for (int k = 1; k <= N; k++)
        basket[k] = k;

    for (int m = 0; m < M; m++) {
        int i, j;
        scanf("%d %d", &i, &j);

        for (int l = i, r = j; l < r; l++, r--) {
            int tmp = basket[l];
            basket[l] = basket[r];
            basket[r] = tmp;
        }
    }

    for (int k = 1; k <= N; k++)
        printf("%d ", basket[k]);

    return 0;
}

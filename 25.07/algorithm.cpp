#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main() {
	int days[13] = { 0, 31,28,31,30,31,30,31,31,30,31,30,31 };
	int t = 0;
	scanf("%d", &t);
	for (int i = 0; i < t;i++) {
		int month1, day1, month2, day2;
		scanf("%d %d %d %d", &month1, &day1, &month2, &day2);
		int d1 = day1;
		for (int j = 1; j < month1; j++) {
			d1 += days[j];
		}
		int d2 = day2;
		for (int j = 1;j < month2;j++) {
			d2 += days[j];
		}
		int other = d2 - d1 + 1;
		printf("#%d %d\n", i+1, other);
	}
}
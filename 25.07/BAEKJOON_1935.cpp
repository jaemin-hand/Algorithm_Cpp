#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// 스택
double stack[101];
int sp = 0;

void push(double x) { 
    stack[sp++] = x; 
}

double pop(void) { 
    return stack[--sp]; 
}

int main(void) {
    int ex = 0;
    if (scanf("%d", &ex) != 1) {
	    return 0;
    }

    char* post = (char*)malloc(101);
    scanf("%100s", post);

    // 피연산자 값
    double* val = (double*)malloc(sizeof(double) * ex);
    for (int i = 0; i < ex; i++) {
        scanf("%lf", &val[i]);
    }

    // 후위 표기식 계산
    for (char* p = post; *p; p++) {
        char c = *p;

        if (isupper(c)) {
            int idx = c - 'A';
            push(val[idx]);
        }
        else {
            double b = pop();
            double a = pop();
            switch (c) {
            case '+': push(a + b); break;
            case '-': push(a - b); break;
            case '*': push(a * b); break;
            case '/': push(a / b); break;
            }
        }
    }

    printf("%.2f\n", stack[sp - 1]);

    free(val);
    free(post);
    return 0;
}
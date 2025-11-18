#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main(void) {
	int area = 0;
	scanf("%d", &area); // 지방수 받고

	int lowest = 0, highest = 0, max_request = 0, result = 0;
	long long sum_reuqest = 0;
	int* request_budget = (int*)malloc(sizeof(int) * area); //지방수만큼 메모리할당
	for (int i = 0; i < area; i++) {
		scanf("%d", &request_budget[i]); // 예산요청 받고
		if (request_budget[i] > max_request) {
			max_request = request_budget[i];
		}
		sum_reuqest += request_budget[i];
	}
	
	highest = max_request;
	long long total_budget = 0;

	scanf("%lld", &total_budget); // 총 예산액 받고

	if (sum_reuqest <= total_budget) {
		printf("%d\n", max_request);
		free(request_budget);
		return 0;
	}
	
	while (lowest <= highest) {
		int mid = (lowest + highest) / 2; // 보험 상한액
		long long temp = 0;
		for (int i = 0; i < area; i++) {
			temp += (request_budget[i] < mid) ? request_budget[i] : mid;
		}

		if (temp <= total_budget) {
			result = mid;
			lowest = mid + 1;
		}
		else {
			highest = mid - 1;
		}
	}
	printf("%d", result);

	free(request_budget);


	return 0;
}
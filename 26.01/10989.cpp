// https://www.acmicpc.net/problem/10989
// 문제
// N개의 수가 주어졌을 때, 이를 오름차순으로 정렬하는 프로그램을 작성하시오.

// 입력
// 첫째 줄에 수의 개수 N(1 ≤ N ≤ 10,000,000)이 주어진다. 
// 둘째 줄부터 N개의 줄에는 수가 주어진다. 
// 이 수는 10,000보다 작거나 같은 자연수이다.

// 출력
// 첫째 줄부터 N개의 줄에 오름차순으로 정렬한 결과를 한 줄에 하나씩 출력한다.

#include<iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    freopen("../input.txt","r",stdin);
    int N;
    cin >> N;
    int count[10001] = {0};
    
    int num;
    for(int i = 0 ; i < N; i++){
        cin >> num;
        count[num]++;
    }

    for(int i = 1; i <= 10000; i++){
        for(int ii = 0; ii < count[i]; ii++){
            cout << i << "\n";
        }
    }


    return 0;
}
#include<iostream>
#include<vector>
#include<cstdio>
using namespace std;
int main() {
    int N = 0;
    cin >> N;
    for(int i = 2; i <= N; i++) {
        if(N % i == 0) {
            N /= i;
            cout << i << endl;
            i--;
        }
        
    }

    return 0;
}
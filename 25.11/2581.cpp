#include<iostream>
#include<vector>
#include<cstdio>
#include<algorithm>
#include<numeric>
using namespace std;

bool check(int value) {
    if(value == 1) return false;
    for(int i = 2 ; i < value; i++){
        if(value % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    freopen("../input.txt","r",stdin);
    int M = 0, N = 0;
    cin >> M >> N;
    vector<int> primes;

    for(int i = M; i <= N; i++) {
        if(check(i) == true) {
            primes.push_back(i);
        }
    }

    if(primes.size() > 0) {
        cout << accumulate(primes.begin(),primes.end(),0) << endl << primes[0];
    } else {
        cout << -1;
    }


    return 0;
}
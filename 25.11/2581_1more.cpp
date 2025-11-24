#include<iostream>
#include<cstdio>
#include<vector>
#include<numeric>
using namespace std;

bool check(int value) {
    if(value == 1) {
        return false;
    }
    for(int i = 2; i < value; i++) {
        if(value % i == 0) return false;
    }
    return true;
}

int main() {
    freopen("../input.txt","r",stdin);
    int M = 0, N = 0;
    cin >> M >> N;
    vector<int> v;

    for(int i = M; i <= N; i++) {
        if(check(i) == true) {
            v.push_back(i);
        }
    }
    if(v.size() > 0) {
        cout << accumulate(v.begin(),v.end(),0) << endl;
        cout << v[0];
    }
    else cout << -1;

    return 0;
}
#include<iostream>
#include<vector>
#include<cstdio>
#include<algorithm>
using namespace std;
int main() {
    freopen("../input.txt","r",stdin);
    int M = 0, N = 0;
    cin >> M >> N;
    vector<int> v;
    
    for(int i = M; i <= N; i++) {
        v.push_back(i);
    }

    for(auto v_value : v) cout << v_value;

    return 0;
}
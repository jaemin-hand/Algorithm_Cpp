#include<iostream>
#include<vector>
#include<cstdio>
using namespace std;

void inputVector(vector<int>& v){
    for(int i = 0; i < v.size();i++){
        cin >> v[i];
    }
}

bool check(int n) {
    if(n == 1) return false;

    for(int i = 2; i < n; i ++){
        if(n % i == 0) {
            return false;
        }
    }

    return true;
}

int main(){
    freopen("../input.txt","r",stdin);
    int N = 0;
    cin >> N;
    vector<int> v(N);
    inputVector(v);
    int count = 0;
    
    for(auto value : v) {
        if(check(value) == true) {
            count++;
        }
    }
    
    cout << count;

    return 0;
}
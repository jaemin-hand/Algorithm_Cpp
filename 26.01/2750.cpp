// https://www.acmicpc.net/problem/2750
// 문제
// N개의 수가 주어졌을 때,
// 이를 오름차순으로 정렬하는
// 프로그램을 작성하시오.

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main () {
    freopen("../input.txt","r",stdin);
    int N = 0;
    cin >> N;
    vector<int> v;
    for(int i = 0; i < N ; i++){
        int temp = 0;
        cin >> temp;
        v.push_back(temp);
    }
    sort(v.begin(),v.end());
    for(int i =0 ; i< N;i++){
        cout << v[i] << endl;
    }

    return 0;
}
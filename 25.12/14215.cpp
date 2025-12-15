#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
    freopen("../input.txt","r",stdin);
    int a = 0, b = 0, c = 0;
    cin >> a >> b >> c;
    vector<int> v;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    sort(v.begin(),v.end());
    if(v[2] < v[0] + v[1]) {
        cout << v[0] + v[1] + v[2];
    } else {
        cout << (v[0] + v[1]) * 2 -1;
    }


    return 0;
}
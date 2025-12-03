#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
    freopen("../input.txt","r",stdin);
    int tc = 0;
    cin >> tc;
    vector<int> v_a;
    vector<int> v_b;
    for(int i = 0 ; i < tc;i++){
        int a = 0,  b = 0;
        cin >> a >> b;
        v_a.push_back(a);
        v_b.push_back(b);
    }
    sort(v_a.begin(),v_a.end());
    sort(v_b.begin(),v_b.end());
    cout << (v_a[v_a.size()-1] - v_a[0]) * (v_b[v_b.size()-1] - v_b[0]);

    return 0;
}
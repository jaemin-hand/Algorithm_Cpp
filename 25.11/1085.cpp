#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(void){
    freopen("../input.txt","r",stdin);
    int x = 0, y = 0, w = 0, h = 0;
    cin >> x >> y >> w >> h;
    vector<int> compare;
    compare.push_back(w-x);
    compare.push_back(h-y);
    compare.push_back(x-0);
    compare.push_back(y-0);
    sort(compare.begin(),compare.end());
    cout << compare[0];
    


    return 0;
}
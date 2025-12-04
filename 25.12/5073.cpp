#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
    freopen("../input.txt","r",stdin);
    while (1) {
        
        int a = 0, b = 0, c = 0;
        cin >> a >> b >> c;
        if (a == 0 && b == 0 && c == 0) {
            break;
        }
        vector<int> compare;
        compare.push_back(a);
        compare.push_back(b);
        compare.push_back(c);
        sort(compare.begin(), compare.end());
        if (compare[2] >= compare[0] + compare[1]) {
            cout << "Invalid" << endl;
        }
        else if (compare[0] == compare[1] && compare[1] == compare[2]) {
            cout << "Equilateral" << endl;
        }
        else if (compare[0] == compare[1] || compare[1] == compare[2]) {
            cout << "Isosceles" << endl;
        }
        else {
            cout << "Scalene" << endl;
        }
    }


    return 0;
}
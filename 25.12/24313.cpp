#include<iostream>
using namespace std;
int main() {
    int a1 = 0, a0 = 0;
    cin >> a1 >> a0;
    
    int c = 0;
    cin >> c;

    int n0 = 0;
    cin >> n0;

    int score = a1 * n0 + a0;
    int limit = c * n0;

    if(score <= limit && a1 <= c) {
        cout << 1;
    } else {
        cout << 0;
    }


    return 0;
}
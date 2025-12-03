#include<iostream>
#include<vector>
using namespace std;
int main() {
    freopen("../input.txt","r",stdin);
    int A = 0, B = 0, C = 0;
    cin >> A >> B >> C;
    
    if(A + B + C != 180) {
        cout << "Error";
    }
    else if(A == B && B == C) {
        cout << "Equilateral";
    }
    else if(A == B || B == C || C == A) {
         cout << "Isosceles";
    }
    else { 
        cout << "Scalene";
    }


    return 0;
}
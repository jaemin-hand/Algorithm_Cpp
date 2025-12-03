#include<iostream>
#include<vector>
using namespace std;
int main() {
    freopen("../input.txt","r",stdin);
    while(1){
        int a = 0, b = 0, c = 0;
        cin >> a >> b >> c;
        if(a == 0 && b == 0 && c == 0) {
            break;
        }
        if(a == b && b == c && c == a) {
            cout << "Equilateral" << endl;
        }
        else if(a == b && b != c && a == c) {
            cout << "Isosceles" << endl;
        }
        else if(a != b && b == c && a == c) {
            cout << "Isosceles" << endl;
        }
        else if(a == b && b == c && a != c) {
            cout << "Isosceles" << endl;
        }
        else if(a != b && b != c && a != c) {
            cout << "Invalid" << endl;
        }

    }


    return 0;
}
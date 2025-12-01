#include<iostream>
using namespace std;
int main() {
    freopen("../input.txt","r",stdin);
    int a =0 ,b=0,c=0,d=0,e=0,f=0;
    for(int i = 0 ; i < 6;i++){
        cin >> a >> b >> c >> d >> e >> f;
    }
    if(a != c && a == e) {
        cout << c << " ";
    }
    else if(a == c && a != e) {
        cout << e << " ";
    }
    else if(c == e && c != a) {
        cout << a << " ";
    }

    if(b != d && b == f) {
        cout << d;
    }
    else if( b == d && b != f) {
        cout << f;
    }
    else if(d == f && d != b) {
        cout << b;
    }


    return 0;
}
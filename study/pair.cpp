#include<iostream> // cin cout
#include<vector>
#include<utility> // pair 를 쓰기 위한 헤더 (vector 헤더 있으면 생략 가능)
using namespace std;
int main(){

    // Python 튜플느낌.
    pair<int,int> p;
    p = {10, 20};
    cout << p.first << " " << p.second << endl;
    
    vector<int> v = {1,2,3,4}; // 정수형 담을 수 있는 int list.
    // Python 문법
    // for i in list:
    // auto 로 해서 C++에서 타입 auto로 맞추기
    for(auto val : v) {
        cout << val << " ";
    }
    // 결과출력 : 1 2 3 4 5

    

    return 0;
}
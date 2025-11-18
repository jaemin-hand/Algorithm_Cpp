#include<iostream>
#include<cstdio>
int main(void){
    freopen("../input.txt","r", stdin);
    int A = 0,B = 0,V = 0;
    std::cin >> A >> B >> V;
    // A미터 올라감
    // B미터 내려감
    // V미터인 나무막대를.
    // 5미터인 나무에 2만큼 올라가고 1만큼 내려옴

    int now = 0;
    // 현재 미터

    int day_for_result = 0;
    // 며칠걸리는지
    
    V -= B;
    // 마지막날 미끄덩 계산빼기

    day_for_result = V / (A - B);

    if((V % (A - B)) > 0 ){
        day_for_result++;
    }
    
    
    std::cout << day_for_result;

    return 0;
}
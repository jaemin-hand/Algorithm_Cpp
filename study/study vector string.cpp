#include<iostream>
#include<vector> // vector 쓸때, pair도 포함
#include<algorithm> // sort 쓸때
int main() {
    // pair 사용해보기

    // vector<pair<int,string>> students;
    std::vector<std::pair<int, std::string>> students;

    students.push_back({90, "jaemin"});
    students.push_back({85, "sonson"});
    students.push_back({100, "minmin"});

    // 정렬 Pair를 정렬하면 자동으로 첫번째를 기준으로 정렬된다
    std::sort(students.begin(), students.end());
    // 결과 : (85, sonson), (90, jaemin), (100, minmin) 첫번째 기준이니 점수기준
    
    // auto를 사용한 반복문 스타일
    for(auto s : students) {
        // s 는 pair<int, string> 타입이 된다.
        std::cout << "점수 : " << s.first << ", 이름: " << s.second << std::endl;
    }

    // long long 주의사항
    long long bigMoney = 10000000000; // 100억
    std::cout << "내 희망재산 : " << bigMoney << std::endl;

    return 0;
}
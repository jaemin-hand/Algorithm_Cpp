#include<iostream>
#include<vector> // list 쓸때
#include<algorithm> // sort 쓸때
int main(void){
    // 선언 (정수를 담는 list)
    std::vector<int> integer;

    // 추가 append 생각ㄱ
    integer.push_back(30);
    integer.push_back(10);
    integer.push_back(20);
    // [30, 10, 20]

    // 값 접근
    std::cout << "첫번째 : " << integer[0] << std::endl;
    
    // 정렬
    std::sort(integer.begin(), integer.end());
    // 결과 : [10, 20, 30]
    // sort(값,값) 형태인 줄 알았으나 아니다. 주의!
    // sort(integer[0],integer.size()-1) 해도 될 것 같은 의문이 들었지만 찾아보니
    // integer[0], integer.size()-1 은 값이다.
    // sort(integer[0],integer.size()-1) 이게 아니고
    // sort(&integer[0], &integer[0] + integer.size()); 인 것.

    // pop
    std::cout << "맨 뒤 값: " << integer.back() << std::endl;
    integer.pop_back(); // 맨 뒤 삭제 (반환 안하고 삭제함 주의!)
    // [10, 20]
    
    // len
    std::cout << "남은 개수: " << integer.size() << std::endl;
    // 2

    // 전체 출력 (반복문)
    for(int i = 0; i < integer.size(); i++){
        std::cout << integer[i] << " ";
    }

    return 0;
}
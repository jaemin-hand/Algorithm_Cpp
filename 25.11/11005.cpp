#include<iostream>
#include<vector> // vector
#include<algorithm> // reverse, sort
using namespace std;
int main() {
    int N = 0, B = 0;
    cin >> N >> B;

    vector<char> result;
    
    while(N > 0) {
        int temp = N % B; // 나머지
        
        if(temp < 10) {
            result.push_back(temp + '0');
        }
        else {
            result.push_back(temp - 10 + 'A');
        }
        N /= B;
    }
    reverse(result.begin(), result.end());

    for(int i = 0; i < result.size();i++){
        cout << result[i];
    }

    return 0;
}
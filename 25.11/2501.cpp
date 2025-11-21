#include<iostream>
#include<vector>
using namespace std;
int main() {
   int N = 0, K = 0, count = 0;
   cin >> N >> K;

   vector<int> arr;

   for (int i = 1; i <= N; i++) {
      if (N % i == 0) {
         arr.push_back(i);
      }
   }

   cout << arr[K-1];

   return 0;
}
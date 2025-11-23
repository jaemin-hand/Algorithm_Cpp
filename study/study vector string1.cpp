// #include<iostream>
// #include<vector>
// using namespace std;
// int main() {
//     vector<int> v;
//     for(int i = 10 ; i < 51; i+=10){
//         v.push_back(i);
//     }
    
//     cout << "3번째 숫자: " << v[2] << endl << "총 개수: " << v.size();


//     return 0;
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// int main() {
//     vector<int> v;
//     for(int i = 0; i < 5;i++){
//         v.push_back(i+1);
//     }
//     for(int i = 0 ; i < 2;i++){
//         v.pop_back();
//     }
//     for(int i = 0; i < v.size(); i++){
//         cout << v[i] << " ";
//     }

//     return 0;
// }

#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    vector<string> s;
    s.push_back("Apple");
    s.push_back("Banna");
    s.push_back("Orange");
    
    s[1] = "Grapes";
    for(auto val : s){
        cout << val << endl;
    }

    return 0;
}
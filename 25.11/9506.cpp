#include<iostream>
#include<cstdio>
#include<vector>
#include<numeric>
using namespace std;
int main() {
    freopen("../input.txt","r",stdin);
    
    
    while(1){
        int n = 0;
        cin >> n;
        if(n == -1){
            break;
        }
        
        vector<int> array;
        for(int i = 1 ; i < n;i++){
             if(n % i == 0){
                array.push_back(i);
             }
        }
        
        int compare = 0;

        for(int i = 0 ;i < array.size(); i++){
            compare += array[i];
        }
        if(compare == n) {
            cout << n << " = ";
            for(int i = 0 ; i < array.size(); i++){
                cout << array[i];
                if(i != array.size() - 1) {
                    cout << " + ";
                } else {
                    cout << endl;
                    break;
                }
            }
        } else {
            cout << n << " is NOT perfect." << endl;
        }
    }
    

    return 0;
}
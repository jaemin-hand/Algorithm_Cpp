#include<iostream>
using namespace std;
int main() {
    freopen("../input.txt","r",stdin);
    int N = 0, M = 0;
    cin >> N >> M;
    int* array = new int[N];
    for(int i = 0 ; i < N; i++){
        cin >> array[i];
    }
    int biggest = 0;
    for(int i = 0; i < N; i++){
        for(int ii = i + 1; ii < N; ii++){
            for(int iii = ii + 1; iii < N; iii ++){
                if(array[i] + array[ii] + array[iii] <= M && array[i] + array[ii] + array[iii] > biggest){
                    biggest = array[i] + array[ii] + array[iii];
                }
            }
        }
    }
    cout << biggest;

    delete[] array;
    return 0;
}
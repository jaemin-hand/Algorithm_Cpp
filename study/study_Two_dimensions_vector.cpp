#include<iostream>
#include<vector>
using namespace std;
int main() {
    int N = 3, M = 4;
    vector<vector<int>> board(N, vector<int>(M,0));
    board[2][1] = 7;
    for(int i = 0 ; i < board.size(); i ++){
        for(int ii = 0 ; ii < board[0].size(); ii++){
            cout << board[i][ii] << " ";
        }
        cout << endl;
    }

    return 0;
}
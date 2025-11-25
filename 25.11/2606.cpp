#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 전역 변수
vector<vector<int>> node;
vector<bool> visited;
int total_count = 0;

void dfs(int start) {
    visited[start] = true; 
    
    for (int next : node[start]) {
        if (!visited[next]) {
            total_count++;
            dfs(next);
        }
    }
}

int main() {
    freopen("../input.txt","r",stdin);
    int cpu = 0, connect = 0;
    cin >> cpu >> connect;

    // resize를 사용해 크기를 동적으로 할당하고 초기화
    node.resize(cpu + 1); 
    visited.resize(cpu + 1, false);


    for (int i = 0; i < connect; ++i) {
        int a, b;
        cin >> a >> b;
        node[a].push_back(b);
        node[b].push_back(a);
    }

    dfs(1);

    cout << total_count << endl;

    return 0;
}
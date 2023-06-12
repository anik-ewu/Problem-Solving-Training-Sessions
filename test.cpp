#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>adj;


pair<int, int> traverseTree(Node* root, int& cnt) {
    int sum = 0;
    pair<int, int>u = {0, 0};
    for (auto child: root->children) {
        pair<int, int>v = traverseTree(child);
        u.first += v.first;
        u.second += v.second;
    }
    if (root->val < u.first / u.second) {
        cnt++;
    }
    return {root->val + u.first, 1 + u.second};
}

int main() {

    int n, a, b;
    cin>>n;
    adj.resize(n + 2);

    for (int i = 1; i < n; i++) {
        cin>>a>>b;
        adj[a].push_back(b);
    }

    traverseTree(1);

    return 0;
}

/*
9
1 2
1 3
2 4
2 5
2 6
4 7
4 8
8 9
*/

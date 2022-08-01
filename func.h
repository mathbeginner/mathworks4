#ifndef FUNC_H
#define FUNC_H
#include<string>
#include<iostream>
#include<unordered_set>
#include<cmath>

using namespace std;

class Solution {
private:
    unordered_set<int> rec;
    string ans;
    int k;
    int highest;
    
public:
    string crackSafe(int n, int k);

    void dfs(int val);

};

#endif

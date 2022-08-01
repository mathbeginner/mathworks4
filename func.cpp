#include"func.h"
//#include<iostream>
//#include<unordered_set>
//#include<string>

using namespace std;


string Solution::crackSafe(int n, int k) {
        highest=pow(10,n-1);
        this->k=k;
        dfs(0);
        ans+=string(n-1,'0');
        return ans;
    }   

void Solution::dfs(int val){
        for(int i=0;i<k;i++){
            int x=val*10+i;
            if(!rec.count(x)){
                rec.insert(x);
                dfs(x%highest);
                ans+=(i+'0');
            }
        }
    } 

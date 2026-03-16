#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

class Solution {
  public:
    void pb(deque<int>& dq, int x) {
        // code here
        dq.push_back(x);
        
    }

    void ppb(deque<int>& dq) {
        // code here
        if(!dq.empty()){
            dq.pop_back();
        }
    }

        
    int front_dq(deque<int>& dq) {
        // code here
        if(dq.empty()) return -1;
        return dq.front();
    }
        

    void pf(deque<int>& dq, int x) {
        // code here
        dq.push_front(x);
    }
};
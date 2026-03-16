#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


queue<int> reverseFirstK(queue<int> q, int k) {
        // code here
        if(k>q.size()) return q;
        
        
        stack <int> s;
        queue <int> q2;
        
        while(k--){
            s.push(q.front());
            q.pop();
        }
        
        while(!s.empty()){
            q2.push(s.top());
            s.pop();
        }
        
        while(!q.empty()){
            q2.push(q.front());
            q.pop();
        }
        
        
        return q2;
    }


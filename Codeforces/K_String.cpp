#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"Yes\n";
#define no cout<<"No\n";
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);



int main(){ 
    optimize();  
    
    int k;cin>>k;
    string s;cin>>s;

    map <char,int> m;

    for(int i=0;i<s.size();i++){
       m[s[i]]++;
    }
    bool ok = true;
    for(auto u : m){
       if(u.second%k!=0) ok = false;
    }

    if(!ok){
        cout<<-1<<endl; return 0;
    }

    string final;    
      for(auto u : m){
        int prnt_cnt = u.second/k;
        // cout<<prnt_cnt<<endl;
        while (prnt_cnt--)
        {
            /* code */
            final+=u.first;
        }
        
      }
    
    while (k--)
    {
        /* code */
        cout<<final;
    }
    cout<<endl;
    
    return 0;
}
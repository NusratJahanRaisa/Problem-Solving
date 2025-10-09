#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){ 
    optimize();  

    string s,t; cin>>s>>t;

    for(int i=0;i<s.size();i++){
        s[i]=tolower(s[i]);
        t[i]=tolower(t[i]);
    }
    
    if(s<t) cout<<-1<<endl;
    else if(s>t) cout<<1<<endl;
    else cout<<0<<endl;


    return 0;
}
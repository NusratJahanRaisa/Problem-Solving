#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){ 
    optimize(); 
    
    int n;cin>>n;
    map<int,int>m;
    for(int i=1;i<=n*4-1;i++){
        int num;cin>>num;
        m[num]++;
    }
    for(auto u : m){
        if(u.second==3) cout<<u.first<<endl;
    }
    return 0;
}
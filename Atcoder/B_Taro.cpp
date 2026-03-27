#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"Yes\n";
#define no cout<<"No\n";
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void Ja_han(){

    int n,m; cin >> n >>m;

    map<pair<int,char>,bool> mp;
    vector<pair<int,char>>v;

    for(int i = 0; i < m; i++){
        int family;char gen; cin>>family>>gen;
        v.push_back(make_pair(family,gen));
        mp[{family,gen}]={false};
    }
    
    for(int i=0;i<m;i++){
        if(v[i].second =='F') no
    
        else if(mp[{v[i].first,v[i].second}]==false){
            yes;
            mp[{v[i].first,v[i].second}]=true;
        }
        else no
    }
}

int main(){
    optimize();

    // int t; cin >> t;
    // while(t--){
        Ja_han();
    // }

    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void Ja_han(){

    int n; cin >> n;
    vector<int> v(n);
    map<int,int>m;
    for(int i = 0; i < n; i++){
        cin >> v[i];
        m[v[i]]++;
    }

    int cnt=0;

    for(auto u : m){       
        if(u.second>u.first){
           cnt+=abs(u.second-u.first);
        }
        else if(u.second<u.first){
           cnt+=u.second;
        }      
    }

    cout<<cnt<<endl;
}

int main(){
    optimize();

    // int t; cin >> t;
    // while(t--){
        Ja_han();
    // }

    return 0;
}
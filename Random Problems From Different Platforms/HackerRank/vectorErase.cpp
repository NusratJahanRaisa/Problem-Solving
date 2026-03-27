#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void Ja_han(){

    int n; cin >> n;
    vector<int> v(n);

    for(int i = 0; i < n; i++) cin >> v[i];

    int pos,ran1,ran2;
    cin>>pos>>ran1>>ran2;

    v.erase(v.begin()+pos-1);

    v.erase(v.begin()+ran1-1,v.begin()+ran2-1);

    cout<<v.size()<<endl;
    for(auto u : v) cout<<u<<" ";
    cout<<endl;    
}

int main(){
    optimize();

    // int t; cin >> t;
    // while(t--){
        Ja_han();
    // }

    return 0;
}
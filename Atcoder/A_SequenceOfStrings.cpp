#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void Ja_han(){

    int n; cin >> n;
    vector<string> v;

    for(int i = 0; i < n; i++){
       string s;cin>>s;v.push_back(s);
    }
    reverse(v.begin(),v.end());

    for(int i=0;i<n;i++){
        cout<<v[i]<<endl;
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
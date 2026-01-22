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

    sort(v.begin(),v.end());

    int val = (v[0]*2)-1;
    int ans=0;
    
    for(int i = 1; i < n; i++){
        if(val<=v[i]){
             ans+=(ceil((double)v[i]/val))-1;
        }
    }
    cout<<ans<<endl;
}

int main(){
    optimize();

    int t; cin >> t;
    while(t--){
        Ja_han();
    }

    return 0;
}
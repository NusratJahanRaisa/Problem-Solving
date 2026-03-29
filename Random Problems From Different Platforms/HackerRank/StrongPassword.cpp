#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void Ja_han(){

    int n; cin >> n;
    string s;cin>>s;
    string a = "!@#$%^&*()-+";
    int dig=1,up=1,low=1,special=1;
    for(int i = 0; i < n; i++){
        if(isdigit(s[i])) dig=0;
        if(isupper(s[i])) up=0;
        if(islower(s[i])) low=0;

        for(auto u : a){
          if(s[i]==u) special=0;
        }
    }
    
    int sum=dig+up+low+special;

    int ans = max(sum,6-n);

    cout<<ans<<endl;

    
}

int main(){
    optimize();

    // int t; cin >> t;
    // while(t--){
        Ja_han();
    // }

    return 0;
}
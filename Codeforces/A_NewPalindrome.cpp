#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void Ja_han(){

    string s;cin>>s;
    
    if(s.length()<=3){
        no return;
    }

    int n = s.length()/2;
    
    bool flag = false;

    for(int i=1;i<n;i++){
        if(s[i]!=s[i-1]) flag=true;
    }
    
    if(flag) yes
    else no
}

int main(){
    optimize();

    int t; cin >> t;
    while(t--){
        Ja_han();
    }

    return 0;
}
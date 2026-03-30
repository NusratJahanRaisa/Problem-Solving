#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void Ja_han(){

    string s,v="aoyeui"; cin>>s;

    for(int i=0;i<s.size();i++){

        s[i]=tolower(s[i]);

        bool flag = true;

        for(auto a : v){
            if(s[i]==a) flag=false;
        }
        if(flag==true){
            cout<<"."<<s[i];
        }
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
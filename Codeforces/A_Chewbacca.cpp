#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){ 
    optimize();
    
    string s;cin>>s;
    
    for(int i=0;i<s.length();i++){
        if(s[0]=='9' && i==0) cout<<s[0];
        else if(s[i]>'4') cout<< 9 - (s[i]-'0');
        else cout<<s[i];
    }
    cout<<endl;

    return 0; 
}
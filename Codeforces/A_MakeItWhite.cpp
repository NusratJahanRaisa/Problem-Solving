#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


void jahan(){
    int n,i,j;cin>>n;
    string s;cin>>s;

    for(i=0;i<s.size();i++){
        if(s[i]=='B') break;
    }
    for(j=s.size()-1;j>=0;j--){
        if(s[j]=='B') break;
    }
    // cout<<i<<" "<<j<<endl;
    if(i>j) cout<<0<<endl;
    else cout<<j-i+1<<endl;
}

int main(){ 
    optimize();
    
    int t=1;
    cin>>t;
    while (t--)
    {
        /* code */
        jahan();
    }

    return 0; 
}
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){ 
    optimize(); 
    
    int t;cin>>t;while (t--)
    {
        /* code */
        int n;cin>>n;string s;cin>>s;
        bool f=false;
        int pulse=0;

        for(int i=0;i<n;i++){
            if(s[i]=='0' ){
               f=true;
            }
            if(s[i]=='1' && f==true) pulse++;
        }

        cout<<pulse<<endl;
    }
    
    
    return 0;
}
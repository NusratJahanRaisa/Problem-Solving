#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main(){ 
    optimize();  
    int t;
    cin>>t;
    while (t--)
    {
        /* code */
        int n,m;cin>>n>>m;

        int alice=0,bob=0;
        string s;cin>>s;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1') alice++;
            else bob++;
        }
        
        int difference = abs(alice-bob);

        if(n%2!=0) cout<<"No"<<endl;
        else if(difference>n-m) cout<<"No"<<endl;
        else
        cout<<"Yes"<<endl;


        // cout<<alice<<" "<<bob<<endl;
    }
    
}
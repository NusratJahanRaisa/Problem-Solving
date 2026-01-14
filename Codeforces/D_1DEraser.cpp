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
        int n,k;cin>>n>>k;
        string s;cin>>s;
        int ans = 0;
        // bool flag = false;

        for(int i=0;i<s.size();){
           if(s[i]=='B'){
              i+=k;
              ans++;
           }
           else{
              i++;
           }
        }

        cout<<ans<<endl;
    }
    

    return 0; 
}
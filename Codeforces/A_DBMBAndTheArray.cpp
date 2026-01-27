#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){ 
    optimize(); 
    
    int t;cin>>t;
    while (t--)
    {
        /* code */
        int n,s,x;cin>>n>>s>>x;
        vector<int> v(n);
        for(int i=0;i<n;i++) cin>>v[i];

        int sum = accumulate(v.begin(),v.end(),0);
        bool f=false;
        while (sum<=s)
        {
            /* code */
            if(sum==s){
                f=true;
                yes
                break;
            }
            sum+=x;
        }
        if(!f)
        no
    }
    
    
    return 0;
}
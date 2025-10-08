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
        for(int val=n; ;val++){
          
            int sum=0,v=val;
            while (v!=0)
            {
                /* code */
                sum=sum+(v%10);
                v=v/10;
            }

            if(sum%k==0){
                cout<<val<<endl;
                break;
            }
            
        }
        
    }
    
    return 0;
}
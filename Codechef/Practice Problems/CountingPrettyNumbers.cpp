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
        int l,r;cin>>l>>r;
        int cnt=0;
        for(int i=l;i<=r;i++){

            int val=i,dig; 
            dig=val%10;
            // cout<<"dig is - "<<dig<<endl;
            if(dig==2||dig==3||dig==9){
                // cout<<"dig is - "<<dig<<endl;
                cnt++;
            }
            val/=10;
            // cout<<"val - "<<val<<endl;
            }
            
        cout<<cnt<<endl;
    }
    

    return 0; 
}
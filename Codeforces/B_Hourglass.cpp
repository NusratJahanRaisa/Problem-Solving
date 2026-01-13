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
        int s,k,m;cin>>s>>k>>m;

        // conner cases
        if(s==k && s>=m){
            cout<<s-m<<endl;
            continue;
        }
        else if(k>s){
           if(s>=m){
            cout<<s-m<<endl;
           }
           else{
            cout<<0<<endl;
           }
            continue;
        }


        int res=0;
        int totalTime=0;
        while (res+k<m)
        {
            /* code */
            totalTime+=(m-k);
            if(k==s){
                res+=s;
            }
            else if(k<s){
                res+=k;
                // cout<<res<<" ";
            }
        }
        if(s>k && k<m){
            cout<<res-totalTime<<endl;
        }
        else
        cout<<(m-res)<<endl;
    }
    

    return 0; 
}
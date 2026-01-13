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
        int n;cin>>n;

        if(n==2) cout<<2<<endl;
        else if(n==3) cout<<3<<endl;
        else if(n%2==0) cout<<0<<endl;
        else cout<<1<<endl;
    }
    

    return 0; 
}
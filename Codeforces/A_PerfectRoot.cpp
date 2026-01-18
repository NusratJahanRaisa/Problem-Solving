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
        int n;cin>>n;

        for(int i=1;i<=n;i++){
            cout<<i*i<<" ";
        }

        cout<<endl;
    }
    

    return 0; 
}
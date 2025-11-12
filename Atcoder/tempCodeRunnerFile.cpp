#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){ 
    optimize(); 
    
    int n,k;cin>>n>>k;
    int a[n+1];
    for(int i=1;i<=n;i++) cin>>a[i];

    for(int i=k;i<=n;i++) cout<<a[i]<<" ";
    for(int i=1;i<=k-1;i++) cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}
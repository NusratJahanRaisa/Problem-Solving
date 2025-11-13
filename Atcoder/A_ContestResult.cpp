#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){ 
    optimize(); 
    
    int n,m;cin>>n>>m;
    int a[n+1],b[m+1];
    for(int i=1;i<=n;i++) cin>>a[i];
    int sum=0;
    for(int i=1;i<=m;i++){
        cin>>b[i];
        
        sum+=a[b[i]];
    }
    cout<<sum<<endl;
    return 0;
}
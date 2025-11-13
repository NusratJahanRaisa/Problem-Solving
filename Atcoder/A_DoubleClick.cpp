#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){ 
    optimize(); 
    
    int n,d;cin>>n>>d;
    int a[n+1];
    for(int i=0;i<n;i++) cin>>a[i];
    bool f=false;
    for(int i=1;i<n;i++){ 
       if(a[i]-a[i-1]<=d && a[i]-a[i-1]>0){
           f=true;
           cout<<a[i]<<endl;
           break;
       }
    }
    if(!f) cout<<-1<<endl;
    
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){ 
    optimize(); 
    
    int n;cin>>n;int a[n+1];
    for(int i=0;i<n;i++) cin>>a[i];
    bool f=false;
    for(int i=0;i<n-1;i++){
        if(a[i]>=a[i+1]){
            cout<<a[i]<<endl;
            f=true;
            break;
        }
    }
    // if(!f) cout<<a[n-1]<<endl;
    return 0;
}
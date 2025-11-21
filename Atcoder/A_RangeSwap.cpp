#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){ 
    optimize(); 
    
    int n,p,q,r,s;cin>>n>>p>>q>>r>>s;
    int a[n+1];

    for(int i=1;i<=n;i++) cin>>a[i];

    // int b[n+1],c[n+1];

    // for(int i=p;i<=q;i++){
    //    b[i]=a[i];
    // }
    // for(int i=r;i<=s;i++){
    //    c[i]=a[i];
    // }


    for(int i=1;i<=n;i++){
        if(i==p){
            for(int j=r;j<=s;j++){
                cout<<a[j]<<" ";
            }

            i+=(q-p);
        }

        else if(i==r){
            for(int j=p;j<=q;j++){
                cout<<a[j]<<" ";
            }
            i+=(s-r);
        }
        else cout<<a[i]<<" ";
    }
    return 0;
}
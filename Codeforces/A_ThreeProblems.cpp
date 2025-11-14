#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){ 
    optimize(); 
    
    int n;cin>>n;int a[n+1];
    for(int i=1;i<=n;i++) cin>>a[i];
    int firstMin=INT_MAX,secMin=INT_MAX,thirdMin=INT_MAX,firstIn,secIn,thirdIn;

    for(int i=1;i<=n;i++){
       if(a[i]<firstMin){
        firstMin=a[i];
        firstIn=i;
       }
    }
    for(int i=1;i<=n;i++){
       if(a[i]<secMin && a[i]!=firstMin){
        secMin=a[i];
        secIn=i;
       }
    }
    for(int i=1;i<=n;i++){
       if(a[i]<thirdMin &&  a[i]!=firstMin && a[i]!=secMin){
        thirdMin=a[i];
        thirdIn=i;
       }
    }
    if(secMin==INT_MAX || thirdMin==INT_MAX)
    cout<<"-1 -1 -1"<<endl;
    else
    cout<<firstIn<<" "<<secIn<<" "<<thirdIn<<endl;
    
    return 0;
}
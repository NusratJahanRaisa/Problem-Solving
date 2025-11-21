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

    bool freq[n+1] = {false};
    int c=0;
    for(int i=1;i<=n;i++){
        if(freq[i]==true){
            continue;
        }
        else if(a[i]!=i && freq[a[i]]==false ){
            freq[a[i]]=true;
            c++;
        }
    }




    cout<<n-c<<endl;
    for(int i=1;i<=n;i++){
        if(!freq[i]) cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}
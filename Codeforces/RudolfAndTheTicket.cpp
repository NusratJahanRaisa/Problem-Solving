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
        int n,m,k;cin>>n>>m>>k;
        int a[n+1],b[m+1];
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<m;i++) cin>>b[i];
        int cnt=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(a[i]+b[j]<=k) cnt++;
            }
        }

        cout<<cnt<<endl;
    }
    

    return 0; 
}
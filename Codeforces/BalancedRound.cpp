#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while (t--)
    {
        /* code */
        int n,k; cin>>n>>k;
        int a[n];

        for(int i=0;i<n;i++) cin>>a[i];

        sort(a,a+n);

        int cnt=1;
        bool f=1;

        int res=0;

        for(int i=0;i<n-1;i++){
            
            if(a[i+1]-a[i]>k){

               cnt=1;
               f=0;

            }
            
            else{
               cnt++;
            }

            res=max(res,cnt);
        }


        if(f==1||n==1) cout<<0<<endl;

        else cout<<n-res<<endl;
        
    }
    
    return 0;
}
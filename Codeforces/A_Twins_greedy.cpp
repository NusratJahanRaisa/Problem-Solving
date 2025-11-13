#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){ 
    optimize(); 
    
    int n;cin>>n;int a[n+1];
    int totalSum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        totalSum+=a[i];
    }
    sort(a,a+n,greater<int>());

    int coin=0,sum=0;
    for(int i=0;i<n;i++){
      coin++;
      sum+=a[i];
      if(sum>totalSum/2){
        cout<<coin<<endl;
        return 0;
      }
    }
    
}
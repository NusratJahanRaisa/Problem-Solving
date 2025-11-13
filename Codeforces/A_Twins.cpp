#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int sum(int a[],int i,int n){

  int res=0;
//   cout<<i<<" "<<n<<endl;
  for(int j=i;j<n;j++){
     res+=a[j];
  }
  return res;
}
int main(){ 
    optimize(); 
    
    int n;cin>>n;int a[n+1];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n,greater<int>());

    for(int i=0;i<n;i++){
        // cout<<a[i]<<endl;
        if(sum(a,0,i+1)>sum(a,i+1,n)){
            // cout<<sum(a,0,i+1)<<" "<<sum(a,i+1,n)<<endl;
            cout<<i+1<<endl;
            return 0;
        }
    }
    
    return 0;
}
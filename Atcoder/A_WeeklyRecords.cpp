#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){ 
    optimize(); 
    
    int n;cin>>n;
    n*=7;
    int sum=0;
    for(int i=1;i<=n;i++){

       int num;cin>>num;
       sum+=num;

       if(i%7==0){
        cout<<sum<<" ";
        sum=0;
       }
    }

    cout<<endl;
    
    return 0;
}
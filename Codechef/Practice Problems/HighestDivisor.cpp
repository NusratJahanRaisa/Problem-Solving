
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){ 
    optimize();
    
    int num;cin>>num;
    for(int i=10;i>=1;i--){
        if(num%i==0){
            cout<<i<<endl;
            return 0;
        }
    }

    return 0; 
}
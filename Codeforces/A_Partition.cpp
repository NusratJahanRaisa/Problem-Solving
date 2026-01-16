#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){ 
    optimize();
    
    int n;cin>>n;
    vector<int>v(n);
    int plusSum=0,minSum=0;
    for(int i=0;i<n;i++){
        cin>>v[i];

        if(v[i]>0) plusSum+=v[i];
        else minSum+=v[i];
    }
    
    cout<<plusSum-minSum<<endl;

    return 0; 
}
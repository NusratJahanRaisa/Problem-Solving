#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"Yes\n";
#define no cout<<"No\n";
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);



int main(){ 
    optimize();  
    
    int n;cin>>n;
    
    vector <int> v;
    int p;cin>>p;
    while (p--)
    {
        /* code */
        int a;cin>>a;
        v.push_back(a);
    }
    int q;cin>>q;
    while (q--)
    {
        /* code */
        int a;cin>>a;
        v.push_back(a);
    }

    sort(v.begin(),v.end());
    int sz = unique(v.begin(),v.end())-v.begin();

    if(sz==n) cout<<"I become the guy."<<endl;
    else cout<<"Oh, my keyboard!"<<endl;
    
    
    return 0;
}
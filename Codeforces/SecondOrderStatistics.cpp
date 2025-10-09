#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"Yes\n";
#define no cout<<"No\n";
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);



int main(){ 
    optimize();  
    
    int n;cin>>n;
    
    set <int> s;
    while (n--)
    {
        /* code */
        int a;cin>>a;
        s.insert(a);
    }
    if(s.size()==1) cout<<"NO"<<endl;
    else
    cout<<*++s.begin()<<endl;
    
    
    return 0;
}
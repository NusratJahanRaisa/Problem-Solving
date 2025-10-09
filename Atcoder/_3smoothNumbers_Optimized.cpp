#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"Yes\n";
#define no cout<<"No\n";
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){ 
    optimize();
    
    long long n;cin>>n;

    while (true)
    {
        /* code */
        if(n%2==0) n/=2;
        else break;
    }
    while (true)
    {
        /* code */
        if(n%3==0) n/=3;
        else break;
    }
    
    if(n==1) yes
    else no

    return 0; 
}
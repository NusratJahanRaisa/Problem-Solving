#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"Yes\n";
#define no cout<<"No\n";
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){ 
    optimize(); 
    int a[9];
    bool f= true;

    for(int i=0;i<8;i++){
        cin>>a[i];
        if(a[i]<100 || a[i]>675) f=false;
        if(a[i]%25!=0) f=false;
    }
    
    for(int i=0;i<7;i++){
        if(a[i]>a[i+1]) f=false;
    }
    if(f) yes
    else no
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0); 


int main(){ 
    optimize();  
    
    int n;cin>>n;
    int s1=0,s2=0,s3=0;
    while (n--)
    {
        for(int i=0;i<3;i++){
            int a;cin>>a;
            if(i==0) s1+=a;
            else if(i==1) s2+=a;
            else s3+=a;
        }
    }
    
    if(s1==0 && s2==0 && s3==0) yes
    else no

    return 0;
}



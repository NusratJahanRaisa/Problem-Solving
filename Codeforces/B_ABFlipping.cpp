#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void jahan(){

    int n;cin>>n;
    string s;cin>>s;
    int cntA=0,cntB=0,A=0,B=0;
    bool flagA=false;
    for(int i=0;i<n;i++){     
        if(s[i]=='A'){
           A=i;
           flagA=true;
           break;
        }
    }
    for(int i=n-1;i>=0;i--){
        if(s[i]=='B'){
            B=i;
            break;
        }
    }
    if(B<A || !flagA)
    cout<<0<<endl;
    else
    cout<<B-A<<endl;
}



int main(){ 
    optimize();
    
    int t;cin>>t;
    while (t--)
    {
        /* code */
        jahan();
    }
    

    return 0; 
}
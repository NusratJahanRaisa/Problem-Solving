#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){ 
    optimize(); 
    
    int t;cin>>t;while (t--)
    {
        /* code */
        int n,m;cin>>n>>m;
        string x,s;cin>>x>>s;
        string newX=x;
        int cnt=0;
        bool f=false;


        while (cnt<=5)
        {
            /* code */
            if(newX.find(s)!=string::npos){
                cout<<cnt<<endl;
                f=true;
                break;
            }    
            newX=newX+newX;
            cnt++; 
        }
        
        if(!f)
        cout<<-1<<endl;
        
    }
    
    
    return 0;
}
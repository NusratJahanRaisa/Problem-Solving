#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){ 
    optimize(); 
    
    int t;cin>>t;while(t--)
    {
        /* code */
       
       
        int n;cin>>n;        
        int res;

        if(n<10){
            cout<<n<<endl;
        }

        else{
        
        if(n<=90){
            res=9+(n/10);
        }
        else if(n<=999){
            res=9+9+(n/100);
        }
        else if(n<=9999){
            res=9+9+9+(n/1000);
        }
        else if(n<=99999){
            res=9+9+9+9+(n/10000);
        }
        else if(n<=999999){
            res=9+9+9+9+9+(n/100000);
        }

        cout<<res<<endl;

        }
            
    }
    
    
    return 0;
}
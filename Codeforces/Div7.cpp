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
        int n;cin>>n;
        if(n%7==0) cout<<n<<endl;
        else{
            n/=10;
            n*=10;

            for(int i=n;i<n+11;i++){
                if(i%7==0){
                    cout<<i<<endl;
                    break;
                }
            }
        }
    }
    
    
    return 0;
}
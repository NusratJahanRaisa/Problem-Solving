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
        int odd=0;
        int n;cin>>n;
        for(int i=0;i<n;i++){
            int num;cin>>num;
            if(num%2==1) odd++;
        }
        cout<<odd<<endl;
    }
    
    
    return 0;
}
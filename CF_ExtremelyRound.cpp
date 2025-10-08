#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){ 
    optimize(); 
    
    int T;
    cin>>T;
    while (T--) {
        int n;
        cin>>n;
        int ans=0;
        for(int firstDig=1;firstDig<=9;firstDig++){
            int num = firstDig;
            while (num<=n)
            {
                /* code */
                ans++;
                num*=10;
            }
            
        }
        cout<<ans<<endl;
    }
    
    
    return 0;
}
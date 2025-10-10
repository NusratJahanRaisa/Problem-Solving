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
        map <int,int> m;
        int n=3;
        while (n--)
        {
            /* code */
            int num;cin>>num;
            m[num]++;
        }
        if(m[0]>=1 && m[1]>=1) cout<<1<<endl;
        else cout<<0<<endl;
    }
    

    return 0; 
}
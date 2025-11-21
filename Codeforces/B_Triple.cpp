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
        map<int,int> m;
        for(int i=0;i<n;i++){
            int num;cin>>num;
            m[num]++;
        }

        // cout<<"size is - "<<m.size()<<endl;

        bool f=true;


        for(auto u : m){
            if(u.second>=3){
                cout<<u.first<<endl;
                f=false;
                break;
            }
            // cout<<u.first<<" "<<u.second<<endl;
        }

        if(f) cout<<-1<<endl;
    }
    
    
    return 0;
}
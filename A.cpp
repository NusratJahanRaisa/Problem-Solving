#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main(){ 
    optimize();  

   
        int n;cin>>n;
        vector <int> v;
        while (n--)
        {
            /* code */
            int a;cin>>a;
            v.push_back(a);
        }

        map <int ,int> m;
        for(auto u : v){
            m[u]++;
        }
        int ans=0;
        for(auto u : m){
            if(u.first>u.second){
               ans+=u.second;
            }
            else{
                ans+=(u.second-u.first);
            }
        }

        cout<<ans<<endl;
        
    } 
    
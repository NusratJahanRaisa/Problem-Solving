#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main(){ 
    optimize();  

   
        int n,m;cin>>n>>m;
        cin.ignore();
        
        vector <pair <string,string>> m1;
        vector <pair <string,string>> m2;

        for(int i=0;i<n;i++){
            string a,b;cin>>a>>b;
            m1.push_back({a,b});
        }
        for(int i=0;i<m;i++){
            string a,b;cin>>a>>b;
            b.erase(b.end()-1);
            m2.push_back({a,b});
        }

        for(auto u : m2){
           for(auto v : m1){
            if(v.second==u.second){
                cout<<u.first<<" "<<u.second<<"; "<<"#"<<v.first<<endl;
            }
           }
        }

    }
    
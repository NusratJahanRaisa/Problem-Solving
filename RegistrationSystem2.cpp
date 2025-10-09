#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main(){ 
    optimize();  

   
        int n,m;cin>>n>>m;
        // cin.ignore();
        
        map <string,string> ipName;

        while(n--){
            string name,ip;
            cin>>name>>ip;
            ipName[ip] = name;
        }

        while(m--){
            string a,b;cin>>a>>b;
            b.pop_back();

            cout<<a<<" "<<b<<"; #"<<ipName[b]<<endl;
        }

    }
    
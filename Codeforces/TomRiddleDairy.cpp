#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main(){ 
    optimize();  

   
        int n;cin>>n;
        cin.ignore();

        vector <string> v;
        while (n--)
        {
            /* code */
            string s;cin>>s;
            v.push_back(s);
        }

        map <string ,bool> m;

        for(auto u : v){
            m[u]=true;
        }
        
        for(auto u:v){
            if(m[u]==true){
                cout<<"NO"<<endl;
                m[u]=false;
            }
            else{
                cout<<"YES"<<endl;
            }
        }
    } 
    